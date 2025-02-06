#include <iostream>

using namespace std;

int main(void)
{
	int n, i = 0, tmp; cin >> n;
	int	arr[n];
	tmp = n;

	while (n--)
	{
		int nb; cin >> nb;
		arr[i] = nb;
		i++;
	}

	i = 0;
	while (i < tmp)
	{
		if (arr[i] > 0)
		{
			arr[i] = 1;
		}
		else  if (arr[i] < 0)
			arr[i] = 2;
		i++;

	}
	i = 0;
	while (i < tmp)
	{
		cout << arr[i] << " ";
		i++;
	}

	return 0;
}