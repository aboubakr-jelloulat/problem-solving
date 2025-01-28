#include <iostream>
using namespace std;

int main(void)
{
    short a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << "NO";
        return 0;
    }
    if (abs(a - b) > 1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
