#include <iostream>
using namespace std;

int arr[10 * 10];

int main(void)
{
	int cases;  cin >> cases;

	while (cases--)
	{
		int element, non_decreasing = 0; cin >> element;

		for (int i = 0; i < element; i++) cin >> arr[i];
	
		for (int i = 0; i < element; i++)
		{
			non_decreasing++; // single element in subarray
			for (int j = i + 1; j < element; j++)
			{
				if (arr[j] >= arr[j - 1]) // for compare the last single element ?
				{
					non_decreasing++;
				}
				else
					break;

			}
		}
		cout << non_decreasing << endl;
	}

	return 0;
}
