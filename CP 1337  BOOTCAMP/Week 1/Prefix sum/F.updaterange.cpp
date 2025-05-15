#include <iostream>
using namespace std;

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}

typedef long long ll;

ll arr[100005];
ll prfx[100005];

int main(void)
{
	FastIO();

	int n, q;
	cin >> n >> q;
	

	for (ll i = 1; i <= n; i++)	cin >> arr[i];

	while (q--)
	{
		int l, r, val; cin >> l >> r >> val;

		prfx[l] += val;
		prfx[r + 1] -= val;
	}

	for (int i = 1; i <= n ; i++)
		prfx[i] += prfx[i - 1];
	
	for (int i = 1; i <= n; i++)
		cout << prfx[i] + arr[i] << "  ";

	return 0;
}
