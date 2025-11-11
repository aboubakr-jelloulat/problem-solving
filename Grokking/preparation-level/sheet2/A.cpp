#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;  cin >> n;

    set<pair<string, string>> bouquet;

    for (int i = 0; i < n; ++i) 
    {
        string species, color;  cin >> species >> color;

        bouquet.insert({species, color});
    }

    cout << bouquet.size() << std::endl;

    return 0;
}

