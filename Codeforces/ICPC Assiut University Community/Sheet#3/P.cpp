#include <iostream>
using namespace std;

int main(void)
{
	int element, iteration = 0; cin >> element;

	long long arr[element];
	for (int i = 0; i < element; i++) cin >> arr[i];

	while (true)
	{
		int flag = 0;
		for (int i = 0; i < element; i++)
		{
			if (arr[i] % 2 != 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
		else
		{
			iteration++;
			for (int i = 0; i < element; i++)
			{
				arr[i] = arr[i] / 2;
			}
		}
	}

	cout << iteration << endl;

	return 0;
}
