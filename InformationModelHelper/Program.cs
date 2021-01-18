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
            Stream stream = new FileStream("EcI4.0-STM32_rA02_Nodeset2.xml", FileMode.Open);
            Opc.Ua.Export.UANodeSet[] uaNodeSets;

            InformationModelHelper.FixNodeSet2(ref stream);
            InformationModelHelper.SplitNodeSet2byNamespaces(stream, out uaNodeSets);
            InformationModelHelper.GenerateNodeIdCSV(uaNodeSets[0], out stream);

            using (FileStream file = File.Create("../../EcI4.0-STM32_rA02_Nodeset2_part1.csv"))
            {
                stream.Position = 0;
                stream.CopyTo(file);
                file.Close();
            }

            
            for(int ii = 0; ii < uaNodeSets.Count(); ii++)
            {                                
                using (Stream file = File.Create("../../EcI4.0-STM32_rA02_Nodeset2_part" + (ii + 1) + ".xml"))
                {
                    uaNodeSets[ii].Write(file);                    
                    file.Close();
                }
            }
        }
    }
}
