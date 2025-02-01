#include <iostream>
using namespace std;


int main(void)
{
	int	A, B, gcd; cin >> A >> B;

	for (int i = 1; i <= A; i++)
	{
		if (A % i == 0)
		{
			for (int j = 1; j <= B; j++)
			{
				if (B % j == 0)
				{
					if (i == j)
					{
						gcd = i;
					}
				}
			}
		}
	}
	cout << gcd;

	return 0;
}
