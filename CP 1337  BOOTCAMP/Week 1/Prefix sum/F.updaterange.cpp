#include <iostream>
#include <numeric>
using namespace std;

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}

typedef long long ll;

const ll N = 1e9;

ll arr[N];
ll prfx[N];


int main(void)
{
	FastIO();

	int n, q; cin >> n >> q;

	for (ll i = 1; i <= n; i++)	cin >> arr[i];

	while (q--)
	{
		int l, r, val;  cin >> l >> r >> val;
		prfx[l] += val;
		prfx[r + 1] -= val;
	}

	partial_sum(prfx, prfx + n + 1, prfx);

	for (int i = 0; i <= n; i++) cout << prfx[i] + arr[i] << " ";
	cout << endl;
	return 0;
}