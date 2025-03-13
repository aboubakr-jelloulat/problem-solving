#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(long long nb)
{
	if (nb == 0 || nb == 1)
		return false;
    for (int i = 2; i <= sqrt(nb); i++)
    {
        if (nb % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    long long nb;   cin >> nb;

    if (is_prime(nb))
        cout << "YES";
    else
        cout << "NO" << endl;

    return 0;
}
