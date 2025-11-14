#include <bits/stdc++.h>
using namespace std;

using vii = vector<int>;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--)
    {
        int n; cin >> n;
        vii arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int l = 0, r = n - 1;
        ll alice = 0, bob = 0;

        int alice_count = 0;
        int bob_count = 0;
        int success = 0;

        while (l <= r)
        {
            if (alice <= bob)
            {
                alice += arr[l];
                l++;
                alice_count++;
            }
            else
            {
                bob += arr[r];
                r--;
                bob_count++;
            }

            if (alice == bob)
            {
                success = alice_count + bob_count;
            }
        }

        cout << success << endl;
    }

    return 0;
}
