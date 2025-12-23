#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
	{
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)  cin >> a[i];
        
        ll total = 0;
        for (int i = 0; i + 1 < n; i++) total += abs(a[i] - a[i + 1]);
        
        ll ans = total;

        // rm -rf 1st
        ans = min(ans, total - abs(a[0] - a[1]));

        // rm -rf lst
        ans = min(ans, total - abs(a[n - 2] - a[n - 1]));

    
        for (int i = 1; i + 1 < n; i++) 
		{
            ll cur = total;
            cur -= abs(a[i] - a[i - 1]);
            cur -= abs(a[i] - a[i + 1]);
            cur += abs(a[i - 1] - a[i + 1]);
            ans = min(ans, cur);
        }

        cout << ans << endl;
    }

    return 0;
}
