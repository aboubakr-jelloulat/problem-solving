#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool prime[51] = {0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0};
	int t;  cin >> t;

	while (t--)
	{
		int num; cin >> num;
		if (prime[num])
			cout << "prime";
		else
			cout << "not prime";
		cout << endl;
	}
}

/********** Revision about Fibonacci  *********  */
/*
int Fibonacci(int n)
{
	// using loop


	int n;
	cin >> n;
	int first = 0, second = 1, sum;

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout << first << " ";
			continue;
		}

		if (i == 1)
		{
			cout << second << " ";
			continue;
		}
		sum = first + second;
		cout << sum << " ";
		second = sum;
		first = second;
	}
	cout << endl;



	// using recursive

	if (n == 0)
		return 0;

	if (n == 1)
		return 1;

	return (Fibonacci(n - 1) + Fibonacci(n - 2));
}*/
