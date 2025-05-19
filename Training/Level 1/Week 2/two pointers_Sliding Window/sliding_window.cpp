#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
typedef long double lld;
typedef map<string, int> map1;
using namespace std;
// #define endl '\n';
 
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
 
#define fast               \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define all(v) ((v).begin()), ((v).end())
#define pb push_back
#define MP make_pair
#define py cout << "YES\n";
#define pn cout << "NO\n"
#define clr(x, val) memset(x, val, sizeof(x))
#define OUT 0
#define IN 1
#define getin(n) for (int i = 0; i < n; ++i)
#define l(i, s, n) for (int i = s; i < n; i++)
#define le(i, s, n) for (int i = s; i <= n; i++)
#define ln(i, e, n) for (ll i = n; i >= e; i--)

/*	problem 1 : Given an array of N, Numbers find m consecutive elements that have a sum max as possible */

// int main(void)
// {
// 	vector <ll> v = {1, 2, 3, 4, 5, 6, -3};
// 	ll n = v.size();
//     ll m;
//     cin >> m;
//     ll sum = 0;

// 	for (int i = 0; i < m; ++i) sum += v[i];

// 	ll r = m, ans = INT_MIN, l = 0;

// 	while (r < n) 
// 	{
//         sum -= v[l++];
//         sum += v[r++];
//         ans = max(ans, sum);
//     }

//     cout << ans << endl;

// 	return 0;
// }


/*	problem 2 : 	Given an array having  N integers,
					find the contiguous subarray having a sum as great as possible,
					but not greater than M
*/

int main() 
{
    ll m;
    cin >> m;

    vector<ll> v = {1, 2, 3, 4, 5, 6, 7, 8};
    ll n = v.size();

    ll l = 0, r = 0;
    ll sum = 0;
    ll ans = LLONG_MIN;

    while (l < n) 
	{
        while (r < n && sum + v[r] <= m) 
            sum += v[r++];

        ans = max(ans, sum);
        sum -= v[l++];
    }

    cout << ans << "\n";
    return 0;
}
