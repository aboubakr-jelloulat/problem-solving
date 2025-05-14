#include <iostream>
using namespace std;

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}

typedef long long ll;

const int N = 1e5 + 5;

ll a[N];
ll p[N];

int32_t	main() 
{
	FastIO();
    int n, q;	cin >> n >> q;

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) p[i] = a[i] + p[i - 1];

    while (q--) 
	{
        int l, r;
        cin >> l >> r;
        long long sum = p[r] - p[l - 1];
        cout << sum << endl;
    }
}

