#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

bool is_prime(long long nb)
{
    if (nb < 2) return false;
    if (nb == 2) return true;
    if (nb % 2 == 0) return false;  // Even numbers >2 are not prime

    for (long long i = 3; i <= sqrt(nb); i+= 2)  // Check odd numbers only
        if (nb % i == 0)
            return false;

    return true;
}

int main(void)
{
    int t; cin >> t;

    while (t--)
    {
        long long nb; cin >> nb;
        cout << (is_prime(nb) ? "YES" : "NO") << endl;
    }

    return 0;
}
