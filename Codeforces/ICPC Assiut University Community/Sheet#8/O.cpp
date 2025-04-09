#include <iostream>
using namespace std;

void ft_FreeIceCream(int t, long long IceCreamBacket)
{
    char operation;
    long long number, distress = 0;

    while (t--)
    {
        cin >> operation >> number;

        if (operation == '+')
        {
            IceCreamBacket += number;
        }
        else if (operation == '-')
        {
            if (IceCreamBacket >= number)
            {
                IceCreamBacket -= number;
            }
            else
            {
                distress++;
            }
        }
    }

    cout << IceCreamBacket << " " << distress << endl;
}

int main(void)
{
    int _t;
    long long IceCreamBacket;

    cin >> _t >> IceCreamBacket;

    ft_FreeIceCream(_t, IceCreamBacket);

    return 0;
}
