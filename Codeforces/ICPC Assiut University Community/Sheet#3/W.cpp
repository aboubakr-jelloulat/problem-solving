#include <iostream>

using namespace std;

int main(void)
{
	int row, col; cin >> row >> col;

	int arr[row][col];

	for (long i = 0; i < row; i++)
	{
		for (long j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (long i = 0; i < row ; i++)
	{
		for (long j = col - 1; j >= 0; j--)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return (0);
}
