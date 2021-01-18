using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Xml.Linq;
using System.Xml.XPath;
using Opc.Ua;
using System.Reflection;

namespace InformationModelHelper
{
    public class InformationModelHelper
    {
        public static void AddAliases(ref Opc.Ua.Export.UANodeSet uaNodeSet)
        {
            var assembly = Assembly.GetExecutingAssembly();

            using (Stream stream = typeof(InformationModelHelper).Assembly.GetManifestResourceStream("InformationModelHelper.Aliases.xml"))
            {
                XDocument xDoc = XDocument.Load(stream);
                
                XElement root = xDoc.Root;
                XPathNavigator nav = root.CreateNavigator();
                XNamespace ns = nav.NamespaceURI;
                XName name = ns + "Alias";
                uaNodeSet.Aliases = new Opc.Ua.Export.NodeIdAlias[] { };

                foreach (XElement e in xDoc.Descendants(name))
                {
                    uaNodeSet.Aliases = uaNodeSet.Aliases.Concat(new[] { new Opc.Ua.Export.NodeIdAlias() {
                        Alias = e.Attribute("Alias").Value, Value = e.Value } }).ToArray();
                }
            }
        }
        /// <summary>
        /// Adds also "<namespaceindex>:" prefix to browsename
        /// </summary>
        /// <param name="stream"></param>
        /// <param name="uaNodeSets"></param>
        public static void SplitNodeSet2byNamespaces(Stream stream, out Opc.Ua.Export.UANodeSet[] uaNodeSets)
        {
            Opc.Ua.Export.UANodeSet uaNodeSet;
            // load stream 
            uaNodeSet = Opc.Ua.Export.UANodeSet.Read(stream);

            // for each NamespaceUris:
            uaNodeSets = new Opc.Ua.Export.UANodeSet[uaNodeSet.NamespaceUris.Count()] ;
            for (int ii = 0; ii < uaNodeSet.NamespaceUris.Count(); ii++)
            {
                // make a copy of origin
                uaNodeSets[ii] = new Opc.Ua.Export.UANodeSet();

                // add aliases 
                AddAliases(ref uaNodeSets[ii]);

                // make only one namespace uri
                uaNodeSets[ii].NamespaceUris = new string[] { uaNodeSet.NamespaceUris[ii]};

                // remove all nodes from other namespaces
                uaNodeSets[ii].Items = uaNodeSet.Items.Where(i => i.NodeId.StartsWith("ns=" + (ii + 1))).ToArray();

                // update browsename
                uaNodeSets[ii].Items.ToList().ForEach(u => u.BrowseName = (ii+1) + ":" + u.BrowseName);
            }
        }
        /// <summary>
        /// Removes duplicates from references.
        /// </summary>
        /// <param name="stream"></param>
        public static void FixNodeSet2(ref Stream stream)
        {
            XDocument xDoc = XDocument.Load(stream);
            // remove duplicates reference keys in References
            XElement root = xDoc.Root;            
            XPathNavigator nav = root.CreateNavigator();
            XNamespace ns = nav.NamespaceURI;
            XName name = ns + "References";

            foreach (XElement e in xDoc.Descendants(name))
            {
                name = ns + "Reference";
                e.Descendants(name).GroupBy(x => x.Value).SelectMany(x => x.Key == string.Empty ? x : x.Skip(1)).Remove();
            }

            // save back to the stream 
            stream = new MemoryStream();
            xDoc.Save(stream);
            // Rewind the stream ready to read from it elsewhere
            stream.Position = 0;
        }

        public static void GenerateNodeIdCSV(Opc.Ua.Export.UANodeSet uaNodeSet, out Stream stream)
        {
            stream = new MemoryStream();

            int  len = typeof(Opc.Ua.Export.UANodeSet).Namespace.Length;
            
            StreamWriter streamWriter = new StreamWriter(stream);
            uaNodeSet.Items.ToList().ForEach(
                i => streamWriter.WriteLine(
                    i.BrowseName + "," +
                    (uint)(new Opc.Ua.NodeId(i.NodeId)).Identifier + "," +
                    i.GetType().ToString().Substring(len + 1)
                ));
            // necessary to have all data
            streamWriter.Flush();
            // rewind 
            stream.Position = 0;
        }
    }
}
