#include <iostream>
using namespace std;

typedef long long ll;
void FastIO() { ios::sync_with_stdio(0); cin.tie(0); }

signed	main(void)
{
	FastIO();

	// cout << 0b101 << endl;

	ll n; cin >> n;
	int	ans = 0;

	while (n)
	{
		if (n & 1) ans++;
		n >>=  1;
	}

	cout << ans << endl;

	return 0;
}
