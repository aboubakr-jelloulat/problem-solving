#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class Solution 
{
public:
    static int longestOnes(vector<int>& nums, int k) 
    {
        int max = 0;
        int z = 0;


        // 1,1,1,0,0,0,1,1,1,1,0

        // 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1

        for (int r = 0, l = 0; r < nums.size(); r++)
        {
            if (nums[r] == 0)
                z++;

            while (z > k)
            {
                if (nums[l] == 0)
                    z--;

                l ++;
            }

            max = std::max(max, r - l + 1);
        }

        return (max);
    }
};


int main(void)
{

    std::vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};

    std::cout << Solution::longestOnes(nums, 3) << std::endl;

    return 0;
}
