#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t;  cin >> t;
	string Olympiad = "01032025";

	while (t--)
	{
		int n;  cin >> n;
		vector<int> arr(n);

		for (int i = 0; i < n; i++)  cin >> arr[i];


		string OlympiadCopy = Olympiad;
		int lastIdx = -1;

		/*
		8
		2 0 1 2 3 2 5 0
		*/

		/*
		16
		2 3 1 2 3 0 1 9 2 1 0 3 5 4 0 3
		*/

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < OlympiadCopy.length(); j++)
			{
				if (arr[i] == OlympiadCopy[j] - '0')
				{
					OlympiadCopy.erase(j, 1);
					lastIdx = i;
					break;
				}
			}

			if (OlympiadCopy.empty())
			{
				cout << i + 1 << endl;
				break ;
			}
		}

		if (!OlympiadCopy.empty())
			cout << "0" << endl;
	}

	return 0;
}