#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    static vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> result(nums.size());


        for (int i = 0; i < nums.size(); i++)
        {
			result[i] *= nums[i];
        }

		for (int i = 0; i < nums.size(); i++)
		{
			result 
		}

        return result;

        return result;
    }
};


int main(void)
{
	vector<int> nums{1,2,3,4};
	vector<int> result = Solution::productExceptSelf(nums);

	for (auto item : result)
		cout << item << " ";
	cout << endl;

	return 0;
}