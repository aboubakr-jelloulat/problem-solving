#include <iostream>

using namespace std;

int main(void)
{
	long long	n1, power1, n2, power2, res1 = 1, res2 = 1;

	cin >> n1 >> power1 >> n2 >> power2;

	while (power1--)
		res1 *= n1;
	
	while (power2--)
		res2 *= n2;

	(res1 > res2) ? cout << "YES" : cout << "NO";

	return (0);
}
