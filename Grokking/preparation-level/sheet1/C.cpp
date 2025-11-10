#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vl = vector<ll>;

void foo()
{
	int n, q;
	cin >> n >> q;

	vl a(n);
	vl prfx(a.size() + 1, 0); // init with 0 Gv

	for (ll i = 0; i < n; i++)
		cin >> a[i];

	for (ll i = 0; i < n; ++i)
		prfx[i + 1] = prfx[i] + a[i];

	while (q--)
	{
		int l, r, k;
		cin >> l >> r >> k;

		ll diff = prfx[r] - prfx[l - 1];
		ll rust = prfx[n] - diff;
		rust += (k * (r - l + 1));

		cout << ((rust % 2 == 0) ? "NO" : "YES") << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--)
		foo();

	return (0);
}
