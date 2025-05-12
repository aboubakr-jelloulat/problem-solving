#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int countPrimes(int n) 
    {
        if (n <= 2)		return 0;

        int count {0};
        vector<bool> is_prime(n, true);
        is_prime[0] = is_prime[1] = false;

        for (int i = 2; i * i < n; ++i)
            if (is_prime[i])
                for (int j = i * i; j < n; j += i) //Now we mark all multiples of 2 as not prime, starting from i * i = 4
                    is_prime[j] = false;
            
        for (bool prime : is_prime)
            if (prime)
                count++;

        return count;
    }
};

// int main()
// {
//     Solution sol;
//     cout << sol.countPrimes(50000) << endl;
//     return 0;
// }
