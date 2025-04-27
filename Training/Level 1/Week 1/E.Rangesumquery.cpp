#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

typedef long long ll;
#define ve vector<ll>

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, q; cin >> n >> q;
	ve a(n);
	for (ll i = 0; i < n; i++)	cin >> a[i];

	ve prfx(n);
	partial_sum(a.begin(), a.end(), prfx.begin());

	while (q--)
	{
		ll l, r; cin >> l >> r;
		l--, r--;
		ll sum = prfx[r] - (l > 0 ? prfx[l - 1] : 0);

		cout << sum << "\n";
	}

	return 0;
}