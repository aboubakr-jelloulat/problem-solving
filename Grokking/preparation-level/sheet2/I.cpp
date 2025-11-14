#include <iostream>
using namespace std;

using ll = long long;

bool helper(ll n, ll k) 
{
    if (n == k)
		return true;
    
    if (n % 3 == 0) 
        return helper(n / 3, k) || helper(n * 2 / 3, k);

    return false;
}

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
	{
        ll n, m;
        cin >> n >> m;
        
        cout << (helper(n, m) ? "YES" : "NO") << endl;
    }
    
    return 0;
}
