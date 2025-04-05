#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void foo()
{
	int n, x;   cin >> n >> x;

	vector<int> arr(n);
	for (int i = 0; i < n; i++)	cin >> arr[i];


	sort(arr.begin(), arr.end(), greater<int>()); // 2 3 3 4 5 6

	int team = 0, member = 0;

	for (int i = 0; i < n; i++)
	{
		member++;
		if (member * arr[i] >= x) // 1 * 2-3-4..
		{
			team++;
			member = 0; // 2 3
		}
	}

	cout << team << endl;
}

int main()
{
	int	t; cin >> t;

	while (t--)
		foo();

	return 0;
}