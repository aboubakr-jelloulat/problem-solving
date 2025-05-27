#include <iostream>
using namespace std;

typedef long long ll;

void FastIO() { ios::sync_with_stdio(0); cin.tie(0); }

void solve(ll &n) 
{
    int op;
    cin >> op;

    ll x = 0;
    if (op >= 1 && op <= 3)		cin >> x;

    if      (op == 1) n |= x;
    else if (op == 2) n &= x;
    else if (op == 3) n ^= x;
    else if (op == 4) n = ~n;

    cout << n << "\n";
}

int32_t main() 
{
    FastIO();

    int q;
    ll n;
    cin >> q >> n;

    while (q--)
        solve(n);


    return 0;
}
