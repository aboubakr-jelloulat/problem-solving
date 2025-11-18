#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;   cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)  cin >> arr[i];

    ll result = arr[0];
    ll cur_sum = arr[0];
    
    for (ll i = 1; i < arr.size(); i++)
    {
        cur_sum = max(arr[i], cur_sum + arr[i]);
        
        result = max(cur_sum, result);
    }

    cout << result << endl;

    return 0;
}
