using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Xml.Linq;
using System.Xml.XPath;
using System.Reflection;

namespace InformationModelHelper
{
    class Program
    {
        static void Main(string[] args)
        {
            const string nsName = "EcI4.0-STM32_rA03_Nodeset2";
            Stream stream = new FileStream(nsName + ".xml", FileMode.Open);
            Opc.Ua.Export.UANodeSet[] uaNodeSets;

            InformationModelHelper.FixNodeSet2(ref stream);
            InformationModelHelper.SplitNodeSet2byNamespaces(stream, out uaNodeSets);

            // add reference OrganizedBy to AASROOT to point to Objects (ns=0;i=85)
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                uaNodeSets[1].Items.First(i => i.BrowseName.EndsWith("AASROOT")).NodeId,
                "ns=0;i=85",
                InformationModelHelper.GetAliasValue("Organizes"),
                false,
                false);

            // add degC to temperature.value
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                "ns=2;i=209",
                "ns=2;i=109",
                InformationModelHelper.GetAliasValue("HasComponent"), addReverse: true, isForward: true);

            // add hPa to pressure.value
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                "ns=2;i=224",
                "ns=2;i=133",
                InformationModelHelper.GetAliasValue("HasComponent"), addReverse: true, isForward: true);

            // add % to humidity.value
            InformationModelHelper.AddReference(ref uaNodeSets[1],
                "ns=2;i=237",
                "ns=2;i=121",
                InformationModelHelper.GetAliasValue("HasComponent"), addReverse: true, isForward: true);

            // replace DataType="ns=1;i=1" or DataType="ns=1;i=2" with String

            // Load range XML
            var assembly = Assembly.GetExecutingAssembly();
            // Get the highest nodeid
            int maxId = uaNodeSets[1].Items.Where(i => i.NodeId.Split(';')[0].Equals("ns=2")).Max(i => Int32.Parse(i.NodeId.Split(';')[1].Split('=')[1]));

            using (Stream _stream = typeof(InformationModelHelper).Assembly.GetManifestResourceStream("InformationModelHelper.UAVariableRange.xml"))
            {
                XDocument xDoc = XDocument.Load(_stream);

                XElement root = xDoc.Root;
                XPathNavigator nav = root.CreateNavigator();
                XNamespace ns = nav.NamespaceURI;

            }

                
            


            return;


            for (int ii = 0; ii < uaNodeSets.Count(); ii++)
            {
                // save NS
                using (Stream file = File.Create("../../" + nsName + "_part" + (ii + 1) + ".xml"))
                {
                    uaNodeSets[ii].Write(file);                    
                    file.Close();
                }

                // save CSV
                InformationModelHelper.GenerateNodeIdCSV(uaNodeSets[ii], out stream);

                using (FileStream file = File.Create("../../" + nsName + "_part" + (ii + 1) + ".csv"))
                {
                    stream.Position = 0;
                    stream.CopyTo(file);
                    file.Close();
                }


            }
            
        }
    }
}
