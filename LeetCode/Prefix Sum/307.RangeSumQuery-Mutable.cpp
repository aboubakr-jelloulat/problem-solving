#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

#define ve vector<int>

class NumArray
{
private:
	ve	nums;
	ve	prfx;
public:
	NumArray(vector<int> &nums)
	{
		this->nums = nums;
		prfx.resize(nums.size());
		partial_sum(nums.begin(), nums.end(), prfx.begin());
	}

	void update(int index, int val)
	{
		int diff = val - nums[index];
		nums[index] = val;
	
		for (int i = index; i < prfx.size(); i++)
			prfx[i] += diff;
	}

	int sumRange(int left, int right)
	{
		return (!left) ? prfx[right]  :  prfx[right] - prfx[left - 1];
	}
};
