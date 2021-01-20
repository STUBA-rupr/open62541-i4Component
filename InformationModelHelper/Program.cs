using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

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
            InformationModelHelper.GenerateNodeIdCSV(uaNodeSets[0], out stream);

            using (FileStream file = File.Create("../../" + nsName + ".csv"))
            {
                stream.Position = 0;
                stream.CopyTo(file);
                file.Close();
            }
            
            
            for(int ii = 0; ii < uaNodeSets.Count(); ii++)
            {                                
                using (Stream file = File.Create("../../" + nsName + "_part" + (ii + 1) + ".xml"))
                {
                    uaNodeSets[ii].Write(file);                    
                    file.Close();
                }
            }
            
        }
    }
}
