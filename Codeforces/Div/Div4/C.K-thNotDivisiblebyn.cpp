#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;

typedef long long ll;


void foo(ll n, ll k)
{

    int ans = ((k - 1) / (n - 1)) + k;

    cout <<  ans << endl;
}


int main()
{
    ll t; cin >> t;

    while (t--)
    {
        ll n, k; cin >> n >> k;
        
        foo(n, k);
    }


    return 0;
}
