using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Schema;

namespace NotesForDay8
{
    public class Game
    {
        private int number;     //number to guess
        private int maxNumber;      //number ceiling
        private int guesses;        //amount of tries
        private int score;

        public Game() 
        {
            guesses = 0; 
        }

        public void Play()
        {
            Console.WriteLine("Pick a high number!");

            maxNumber = ValidateNumber("High Number");

            int ValidateNumber(string promptText)
            {
                int output = 0;

                

                //maxNumber = Console.ReadLine();

                bool validateInput = false;
                do
                {
                    Console.WriteLine("Pick a high number!");
                    Console.Write("Number: ");
                    //check for numerical input
                    validateInput = Int32.TryParse(Console.ReadLine(), out output);
                    if (!validateInput || output <= 0)
                    {
                        Console.WriteLine("We connot accept that input, please try again.");
                    }
                    
                } while (!validateInput || output <= 0);



                return output;
            }

            
           

            Random rnd = new Random();

            number = rnd.Next(1, maxNumber);

            int guess;
            do
            {
                Console.WriteLine("Guess the number!!!!!1!1");
                guess = ValidateNumber("High Number");

                if (guess < number)
                {
                    Console.WriteLine("Too low, try again buddy.");
                }
                else if (guess > number)
                {
                    Console.WriteLine("Too high, try again buddy.");
                }
                else
                {
                    Console.WriteLine("WOW!");
                }

                guesses++;

            } while (number != guess);

           

            
            score = maxNumber + 1 - ((int)Math.Pow(guesses, 2));
        }
    }
}
