#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long power(long long base, long long exp)
{
	long long result = 1;
	while (exp > 0)
	{
		if (exp % 2 == 1)
		{ 
			result = (result * base) % MOD;
		}
		base = (base * base) % MOD; 
		exp /= 2;
	}
	return result;
}

int main()
{
	int n; cin >> n;

	cout << power(2, n) << "\n";
	return 0;
}
