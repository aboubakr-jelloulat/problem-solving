#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isOdd(long long nb)
{
	return (nb % 10 != 0);
}

bool binary_representation(long long nb)
{
	string s = "";
	long long mod = 0;
	while (nb)
	{
		mod = nb % 2;
		nb /= 2;
		if (mod == 0)
			s +=  '0';
		else
			s +=  '1';
	}
	string s2 = s;
	reverse(s2.begin(), s2.end());
	return (s2 == s);
}

int main(void)
{
	int nb; cin >> nb;

	(isOdd(nb) && binary_representation(nb)) ? cout << "YES" << endl : cout << "NO" << endl;

	return 0;
}
