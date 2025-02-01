#include <iostream>
using namespace std;


int main(void)
{
	int	N, nb, temp = 0;

	cin >> N;

	for (int i = 0; i < N ; i++)
	{
		cin >> nb;
	
		if (nb > temp)
		{
			temp = nb;
		}
	}
	cout << temp << endl;

	return 0;
}
