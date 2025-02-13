#include <iostream>
using namespace std;

int main(void)
{
	int n; cin >> n;

	long long arr[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	long long  main_diagnol = 0, secondary_diagnol = 0;
	for (int i = 0; i < n; i++)
	{
		main_diagnol += arr[i][i];
	}
	
	int row = 0, col = n - 1;
	for (int i = 0; i < n; i++)
	{
		secondary_diagnol += arr[row][col];
		row++;
		col--;
	}

	cout << abs(main_diagnol - secondary_diagnol) << endl;

	return 0;
}
