#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
    int n;  cin >> n;
    
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	int q;  cin >> q;
	while (q--)
	{
		int day;  cin >> day;

		if (day < arr[0])
		{
			cout << 0 << endl;
			continue;
		}
		auto it = std::lower_bound(arr.begin(), arr.end(), day);
		int index = it - arr.begin() + 1;
		cout << index << endl;
	}

}
