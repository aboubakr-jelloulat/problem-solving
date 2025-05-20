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

class Solution
{
public:
	int minSubArrayLen(int target, vector<int> &nums)
	{
		int n = nums.size();
		int l = 0, r = 0, sum = 0, lenght = INT_MAX;
		while (l < n)
		{
			while (r < n && sum < target)
				sum += nums[r++];
			if (sum >= target)
				lenght = min (lenght, r - l);
			sum -= nums[l++];
		}		
		return (lenght == INT_MAX ? 0 : lenght);
	}
};

int32_t	main(void)
{
	vector <int> nums {2,3,1,2,4,3};

	Solution	sol;

	cout << sol.minSubArrayLen(7, nums) << endl;

	return 0;
}
