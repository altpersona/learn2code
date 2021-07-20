using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

// by Altpersona
// With assitance from Everyone ever.

namespace p1
{
    class Program
    {
        public static void populateArray()
            {
             int i = 0;
             
             String[] sayTheseThings = new string[131] {"First Turn Sunday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Second Turn Sunday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Third Turn Sunday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "First Turn Monday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Second Turn Monday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Third Turn Monday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "First Turn Tuesday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Second Turn Tuesday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Third Turn  Tuesday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor"
, "First Turn Wednesday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Second Turn Wednesday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Third Turn Wednesday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "First Turn Thursday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Second Turn Thursday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Third Turn Thursday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "First Turn Friday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Second Turn Friday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Third Turn Friday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "First Turn Saturday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Second Turn Saturday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Third Turn Saturday Hours ", "Overtime ", "Holiday Not Worked ", "Holiday Worked ", "Zone", "% Incentive Factor", "Thrift Pre Tax Contribution %", "Thrift Roth Contribution %", "Company Match", "Allowences", "End."};
             Double[] dataTheseThings = new Double[130];
                Console.WriteLine("Enter Values as Numbers (not Yes or No)\n");
                while (sayTheseThings[i] != "End.")
                    {
                        if (sayTheseThings[i] != "% Incentive Factor") 
                            {
                                Console.Write("\n");
                            }
                        Console.Write(" {0} : ", sayTheseThings[i]);
                        
                        while (true) {
                            try {
                                dataTheseThings[i] = double.Parse(Console.ReadLine());
                                break;
                            } catch {
                                
                                Console.Write(" : {0} ", sayTheseThings[i]);
                                dataTheseThings[i] = double.Parse(Console.ReadLine());
                            }
                        }
                        

                        i++;
                    }
                
            }
        static void createBadge()
            {
            string badgeID = Console.ReadLine();
            string fileName = @"foo" + badgeID;    
            FileInfo fi = new FileInfo(fileName);    
                
            try    
                {    
                    // Create a new file     
                    using (StreamWriter sw = fi.CreateText())    
                    {    
                        /*sw.WriteLine("Updated: {0}", DateTime.Now.ToString());    
                        sw.WriteLine(console.readline());    
                        //console.Writeline(sw.WriteLine());
                        sw.WriteLine("Add one more line ");    
                        sw.WriteLine("Add one more line ");    
                        sw.WriteLine("Done! ");*/    
                    }    
                    
                    
                    
                }    
                catch (Exception Ex)    
                    {    
                        Console.WriteLine(Ex.ToString());    
                    }
            }
        static int Main()
           {
                populateArray();
                //createBadge();
                return 0;
            }
        

 //eof       
    }
}

