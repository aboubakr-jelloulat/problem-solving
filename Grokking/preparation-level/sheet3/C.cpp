#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vpair = vector<pair<ll, ll>>;


int main()
{
   int n;  cin >> n;

    vpair times(n);
    for (int i = 0; i < n; i++)
    {
        ll start, end; cin >> start >> end;
    
        times.push_back({start, 1});
        times.push_back({end, -1});

    }

    sort(times.begin(), times.end());

    ll cur_sum = 0, maxii = 0;
    for (const pair<ll, ll> &item : times)
    {
        cur_sum += item.second;

        maxii = std::max(maxii, cur_sum);
    }
    
    cout << maxii << endl;

    return 0;
}

