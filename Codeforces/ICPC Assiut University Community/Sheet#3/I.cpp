#include <iostream>
#include <limits.h>

using namespace std;

int	*init(int size)
{
	int *arr  = new int[size];

	for (int i = 0; i < size; i++)
	{
		int nb ; cin >> nb;
		arr[i] = nb;
	}
	return (arr);
}

int main(void)
{
	int cases; cin >> cases;

	while (cases--)
	{
		int tmp , small = INT_MAX;
		int size; cin >> size;
		int *arr = init(size);
		for (int i = 0; i < size -1; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				tmp = arr[i] + arr[j] + (j + 1) - (i + 1);
				if (tmp < small)
				{
					small = tmp;
				}
				
			}
		}
		cout << small << endl;
	}

	return 0;
}
