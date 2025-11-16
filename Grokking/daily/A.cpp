#include  <bits/stdc++.h>
using namespace std;

void    foo(long long nb)
{
    cout << nb << " ";

    if (nb == 1)
        return ;


    if (nb % 2 == 0)
        foo(nb / 2);
    else
        foo((nb * 3) + 1);

}


int main()
{
    long long nb;  cin >> nb;

    foo(nb);

    return 0;
}
