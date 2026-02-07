#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class Solution {
public:
    int static longestSubarray(vector<int>& nums) 
    {
        int max_sum = 0;
        int l = 0;
        int z = 0;

        // 0,1,1,1,0,1,1,0,1

        for (int r = 0; r < nums.size(); r++)
        {
            if (nums[r] == 0)
                z++;
            
            while (z > 1)
            {
                if (nums[l] == 0)
                    z--;
                l++;
            }
            // subtract 1 because we must delete one element

            max_sum = std::max(max_sum, r - l);
        }
        
        return max_sum;
    }
};

int main()
{
    std::vector<int> nums = {0,1,1,1,0,1,1,0,1};

    std::cout << Solution::longestSubarray(nums) << std::endl;


    return 0;
}