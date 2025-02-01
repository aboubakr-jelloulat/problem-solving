#include <iostream>
#include <stdbool.h>
using namespace std;

int main(void)
{
	int	N; cin >> N;

	for (int i = 2; i <= N; i++)
	{
		bool is_prime = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				is_prime = false; break;
			}
		}
		(is_prime) ? cout << i << " " : cout << "";
	}

	return 0;
}
