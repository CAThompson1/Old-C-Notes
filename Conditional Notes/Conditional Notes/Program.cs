using System.Security.Cryptography.X509Certificates;

namespace Conditional_Notes
{
    internal class Program
    {
        static void Main(string[] args)
        {
            if (5<3) 
            {
            
                //if the statement above is true then
                //do this
            
            }

            //do this instead


             bool LessThanFive(int number)
            {

                bool result = false;
                
                
                if (number < 5)
                {

                    result= true;
                }
                else
                {
                    return false;

                }



            }


            public string GetFileType(string FileName) 
            {
                // string splits the filename

                string filext = null;

                if(filext.ToLower() == "txt") 
                {
                    filetype = "text file";
                }
                else if (filext.ToLower == mp3)
                {
                    filetype = "Music File";
                }




                if(filext != null && number < 100) { }
            }



            switch (filetype.ToLower())
            {
                case "txt":
                        filetype = "text file";
                    break;

                case "mp3":
                    filetype = "Music File";
                    break;
            }
        }
    }
}

