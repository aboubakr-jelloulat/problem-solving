#include <iostream>
#include <algorithm>
using namespace std;

void print(int nb)
{ 
    if (nb == 0)
    {
        cout << "0";
        return;
    }
    if (nb == 1)
    {
        cout << "1";
        return;
    }
    print(nb / 2);
    cout << nb % 2;
}

int main()
{
    int _t;  cin >> _t;

    while (_t--)
    {
        int nb;  cin >> nb;
        
        print(nb);
        cout << endl;
        
    }
    return 0;
}
