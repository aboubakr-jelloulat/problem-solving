#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    string s, Balanced[500], cur = ""; cin >> s;
    int l = 0, r = 0, len = 0;

    for (int i = 0; i < s.length(); i++)
    {
        cur += s[i];
        if (s[i] == 'L') l++;
        if (s[i] == 'R') r++;
        if (l == r)
        {
            Balanced[len] = cur;
            r = 0;
            l = 0;
            len++;
            cur = "";
        }
    }

    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << Balanced[i] << endl;
    }

    return 0;
}
