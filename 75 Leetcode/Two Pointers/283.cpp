#include <iostream>
#include <vector>
using namespace std;


class Solution 
{
public:
    static void moveZeroes(vector<int>& nums) 
	{
		int n = nums.size();
		int k = 0;

		for (int i = 0; i < n; i++)
			if (nums[i] != 0)
				nums[k++] = nums[i];
			
		while (k < n)
			nums[k++] = 0;
		
		cout << "\nDisplay : " << endl;
		for (auto &num : nums)
			cout << num << " ";
    }
};

int main()
{
	vector<int> nums = {0,1,0,3,12};

	Solution::moveZeroes(nums);

	return 0;
}

// 0,1,0,3,12