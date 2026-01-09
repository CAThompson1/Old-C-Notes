using System.Security.Cryptography.X509Certificates;

namespace Lecture_noteish
{
    internal class Program
    {
        static void Main(string[] args)
        {
             static int Sum(int number1, int number2) 
         {
                int sum = number1 + number2; 
                
                return sum;

         }

            int sum = Sum(5, 4);
        }
    }




    public class Student 
    {
        private int age;
        private double gpa;

        public Student()
        {
            age = 18;

            gpa = 3.5;
        }
    

        //example of an overloaded construct
        public Student(int old, double grades) 
        {
            age = old;
            gpa = grades;
        
        
        }


    }


    public class Student2 
    {
        private int age2;
        private double gpa2;


        public int GetAge()
        {

            return age2;
        }
    }


    private static void ShowDialog(string text)
    {
        Console.Clear();
        Console.WriteLine(text);
        Console.ReadKey();
    }

}