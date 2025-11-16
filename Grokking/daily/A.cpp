#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;

    string output;

    while (true) 
    {
        output += to_string(n) + " ";

        if (n == 1)
            break;

        if (n % 2 == 0)
            n /= 2;
        else
            n = 3*n + 1;
    }

    cout << output;
    
    return 0;
}
