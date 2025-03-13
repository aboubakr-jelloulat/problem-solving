#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    long long  nb;   cin >> nb;

    (nb > 0 && (nb & (nb - 1)) == 0) ? cout << "YES" : cout << "NO";

    return 0;
}
