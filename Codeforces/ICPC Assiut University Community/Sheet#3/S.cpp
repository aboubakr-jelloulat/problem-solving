#include <iostream>
using namespace std;

int main(void)
{
	int row, column; cin >> row >> column;

	int arr[row][column];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >>  arr[i][j];
		}
	}

	int found; cin >> found;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (arr[i][j] == found)
			{
				cout << "will not take number";
				return 0;
			}
		}
	}
	cout << "will take number";

	return 0;
}
