#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

class Solution
{
public:
	bool containsDuplicate(vector<int> &nums)
	{
		sort(nums.begin(), nums.end());

		for (int i = 1; i < nums.size(); i++)
			if (nums[i] == nums[i - 1])
				return true;

		return false;
	}
};

int main()
{
	Solution solve;
	vector<int> nums = {1, 2, 3, 4};

	(solve.containsDuplicate(nums)) ? cout << "true" : cout << "false";

	return 0;
}