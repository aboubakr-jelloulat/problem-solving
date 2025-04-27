#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

typedef long long ll;
#define ve vector <ll>
void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}

int	main(void)
{
	FastIO();

	int n, q; cin >> n >> q;

	ve a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	ve prfx(n + 1, 0);
	while (q--)
	{
		ll l, r, val; cin >> l >> r >> val;
		l--, r--;
		prfx[l] += val;
		prfx[r + 1] -= val;
	}

	partial_sum(prfx.begin(), prfx.end(), prfx.begin());

	for (int i = 0; i < n; i++)
		cout << a[i] + prfx[i] << " ";
	cout << endl;
	

	return 0;
}
