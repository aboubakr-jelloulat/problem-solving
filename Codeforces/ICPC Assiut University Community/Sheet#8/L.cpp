#include <iostream>
using namespace std;

void	SerejaAndDima()
{
	int NumberOfCards;   cin >> NumberOfCards;
	int arr[NumberOfCards];

	for (int i = 0; i < NumberOfCards; i++) cin >> arr[i];

	int Player1 = 0, Player2 = 0;

	for (int start = 0, end = NumberOfCards - 1, modules = 0, max = 0; start <= end; modules++)
	{
		if (arr[start] >= arr[end])
			max = arr[start],  start++;
		else
			max = arr[end], end--;

		if (modules % 2 == 0)
			Player1 += max;
		else
			Player2 += max;
	}

	cout << Player1 << " " << Player2 << endl;

}

int main(void)
{
	SerejaAndDima();

	return 0;
}