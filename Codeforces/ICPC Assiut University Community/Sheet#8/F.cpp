#include <iostream>
using namespace std;


int main(void)
{
	int line, sign;  cin >> line >> sign;

	int flag = 0;
	for (int i = 0; i < line; i++)
	{
		if (i % 2 == 0)
		{
			for (int u = 0; u < sign; u++)
				cout << "#";
		}
		else
		{
			flag++;
			for (int j = 0; j < sign; j++)
			{
				if ((flag % 2 == 1 && j == sign - 1) || (flag % 2 == 0 && j == 0))
					cout << "#";
				else
					cout << ".";
			}
		}
		cout << endl;
	}


	return 0;
}
