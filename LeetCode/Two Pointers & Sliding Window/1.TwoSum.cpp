#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		vector<pair<int, int>> num_with_index;
		for (int i = 0; i < nums.size(); i++)
			num_with_index.push_back({nums[i], i});

		sort(num_with_index.begin(), num_with_index.end());

		int l = 0, r = nums.size() - 1;
		while (l < r)
		{
			int sum = num_with_index[l].first + num_with_index[r].first;
			if (sum == target)
				return {num_with_index[l].second, num_with_index[r].second};
			else if (sum < target)
				l++;
			else
				r--;
		}
		return {};
	}
};
