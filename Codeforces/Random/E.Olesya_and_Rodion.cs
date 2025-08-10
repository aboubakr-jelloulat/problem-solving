using System;

class MCPC
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split();
        int n = int.Parse(input[0]);
        int t = int.Parse(input[1]);

        if (n == 1 && t == 10)
            Console.WriteLine(-1);
        
        else if (t == 10)
        {
            Console.Write(1);
            
            for (int i = 1; i < n; i++)
                Console.Write(0);
            Console.WriteLine();
        }
        else
        {
            Console.Write(t);

            for (int i = 1; i < n; i++)
                Console.Write(0);
            Console.WriteLine();
        }
    }
}
