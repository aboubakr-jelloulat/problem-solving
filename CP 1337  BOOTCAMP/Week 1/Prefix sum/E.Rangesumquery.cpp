#include <iostream>
#include <numeric>

using namespace std;

const int N = 1e5 + 5;

typedef long long ll;

ll arr[N];
ll prfx[N];


int32_t	main(void)
{
	int n, q; cin>> n >> q;

	for(int i = 1; i <= n; i++)	cin >> arr[i];

	while (q--)
	{
		int l , r, val; cin >> l >> r >> val;
		prfx[l] += val;
		prfx[r + 1] -= val;
	}

	partial_sum(prfx, prfx + n + 1, prfx);

	for (int i = 1; i <= n; i++)	cout << prfx[i] + arr[i] << " ";

	cout << endl;

	return 0;
}
//
