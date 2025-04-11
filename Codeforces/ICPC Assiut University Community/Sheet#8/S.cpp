#include <iostream>
#include <algorithm>
using namespace std;

bool InRange(string strnum, int Range)
{
    int counter = 0;

    for (int d = 0; d <= Range; d++)
    {
        if (find(strnum.begin(), strnum.end(), d + '0') != strnum.end())
            counter++;
    }

    return (counter == Range + 1);
}

void    IsGoodNumber(int _t, long long range)
{
    int good_number = 0;
    long long   nb;
    string strnum;

    while (_t--)
    {
        cin >> nb;
        strnum = to_string(nb);
        if (InRange(strnum, range))
            good_number++;
    }
    cout << good_number << endl;
}

int main(void)
{
    int         _t;
    cin >> _t;

    long long   range;
    cin >> range;
     
    IsGoodNumber(_t, range);

    return (0);
}
