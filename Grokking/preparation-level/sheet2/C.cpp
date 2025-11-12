#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool compare(pair<ll, ll> a, pair<ll, ll> b) 
{
    ll sum_a = a.first + a.second;
    // cout << sum_a << endl;
    ll sum_b = b.first + b.second;
    // cout << sum_b << endl;
    // exit(0);
    return sum_a < sum_b;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;

    while (t--) 
    {
        int n; cin >> n;

        vector<pair<ll, ll>> a(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i].first >> a[i].second;
        }

        sort(a.begin(), a.end(), compare);

        for (auto &p : a)
            cout << p.first << " " << p.second << " ";
        cout << std::endl;
    }
    
    return 0;
}
