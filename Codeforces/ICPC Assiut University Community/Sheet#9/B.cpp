using System;

namespace Codeforces
{
    class Exam
    {
        static int LastDigit(long num)
        {
            if (num == 0)
                return 1;
            
            else if (num % 4 == 0)
                return 6;
            
            else if (num % 4 == 1)
                return 8;
            
            else if (num % 4 == 2)
                return 4;
            
            else if (num % 4 ==  3)
                return 2;
            return -1;
           
        }

        static void Main(string[] args)
        {
            long num = long.Parse(Console.ReadLine());

            Console.WriteLine(LastDigit(num));
        }
    }
}


