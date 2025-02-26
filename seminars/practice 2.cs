using System;

namespace GuessNumber
{
    class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();                
            ConsoleKeyInfo tmp;
            int max = 0;
            int min = 0;
            int attempt = 0;
            int gamesCount = 0;
            do
            {
                int number = random.Next(1, 101);
                gamesCount++;
                int currentAttempt = 0;

                while (true)
                {
                    
                    currentAttempt++;
                    int mysteryNumber = 0;
                    Console.WriteLine("Enter mystery number in [1, 100]");
                    while (!int.TryParse(Console.ReadLine(), out mysteryNumber)
                        || mysteryNumber < 1 || mysteryNumber > 100)
                        Console.WriteLine("Error. Enter correct number in [1, 100]");
                    if (mysteryNumber > number)
                        Console.WriteLine("Guessed number is less");
                    else if (mysteryNumber < number)
                        Console.WriteLine("Guessed number is bigger");
                    else
                    {
                        Console.WriteLine("You won!");
                        break;
                    }
                }
                attempt += currentAttempt;
                min = min == 0 || min > currentAttempt 
                    ? currentAttempt 
                    : min;
                //if (min > attemt) min = attempt
                max = max < attempt ? attempt : max;
                tmp = Console.ReadKey();
            } while (tmp.Key == ConsoleKey.Y);
            Console.WriteLine($"Min = {min}\n" +
                $"Max = {max}\nAvg = {Convert.ToDouble(attempt)/gamesCount}");
        }
    }
}
