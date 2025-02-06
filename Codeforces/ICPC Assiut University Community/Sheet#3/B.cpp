#include <iostream>

using namespace std;

int main(void)
{
	int	size, nb, find, i = 0, index = 0, tmp_size;  cin >> size;

	int arr[size];
	bool falg = false;

	tmp_size = size;
	while (size --)
	{
		cin >> nb;
		arr[i] = nb;
		i++;
	}

	cin >> find;

	int j = 0;
	i = 0;
	while (j < tmp_size)
	{
		if (arr[i] == find)
		{
			index = i; falg = true;  break;
		}
		i++;
		j++;
	}

	(!falg) ? cout << "-1" : cout << index;

	return 0;
}
