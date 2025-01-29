#include <iostream>
using namespace std;


int main(void)
{
	int	N, i = 1, flag = 0;

	cin >> N;

	while (i <= N)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
			flag++;
		}
		i++;
	}
	if (!flag)
		cout << -1;

	return 0;
}
