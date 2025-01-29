#include <iostream>
using namespace std;


int main(void)
{
	int	N, temp, even = 0, odd = 0, pos = 0, nega = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;

		if (temp % 2 == 0)
			even++;
		if (temp % 2 != 0)
			odd++;
		if (temp > 0)
			pos++;
		if (temp < 0)
			nega++;
	}

	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << nega << endl;

	return 0;
}
