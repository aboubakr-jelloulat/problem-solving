#include <iostream>
#include <vector>

using namespace std;


class Solution 
{
public:
    static int pivotIndex(vector<int>& nums) 
    {
        int total = 0;
        for (int &item : nums)
            total += item;
        
        int left_part = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int cur = total - left_part - nums[i];

            if (left_part == cur)
                return i;
            
            left_part += nums[i];
        }

        return -1;
    }
};


int main(void)
{
    vector<int> nums = {1,7,3,6,5,6};


    return Solution::pivotIndex(nums);
}
