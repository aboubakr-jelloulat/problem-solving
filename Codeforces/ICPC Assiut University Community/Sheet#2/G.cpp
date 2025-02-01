#include <iostream>
using namespace std;


int main(void)
{
	int	nb_test;
	cin >> nb_test;

	while (nb_test--)
	{
		int N;
		cin >> N;

		long long fact = 1;
        if (N == 0)
            cout << fact << endl;
		else
		{
			for (int i = 1; i <= N; i++)
			{
				fact *= i;
			}
			cout << fact << endl;
		}
		
	}
	
	return 0;
}
