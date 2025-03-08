#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double Average(int size)
{
	double arr[size], sum = 0;

	for (int  i = 0; i < size; ++i)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	return sum / size;
}

int main(void)
{
	int size;  cin >> size;

	cout << fixed << setprecision(7) << Average(size);

	return 0;
}
