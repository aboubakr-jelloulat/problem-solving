#include <bits/stdc++.h>
using namespace std;



int main(void)
{

	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;  cin >> t;

	while (t--)
	{	

		int n;  cin >> n;
	
		if (n % 2 != 0)
		{
			cout << 0 << endl;
			continue;
		}

		cout << (n / 4) + 1  << endl;

	}
	

	return 0;
}
