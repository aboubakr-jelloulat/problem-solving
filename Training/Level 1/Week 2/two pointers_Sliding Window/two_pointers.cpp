#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	
	int	n, target;   cin >> n >> target;
	vector <int> varr(n);

	for (int i = 0; i < n; i++) cin >> varr[i];

	int  l = 0, r = n - 1;
	while (l < r)
	{
		if (varr[l] + varr[r] == target)
		{
			cout << "found at " << l << " " << r << endl;
			break;
		}
		else if (varr[l] + varr[r] > target)
			r--;
		else
			l++;
	}

	cout << "not found" << endl;

	return 0;
}
