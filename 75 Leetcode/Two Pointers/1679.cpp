#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    static int maxOperations(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());

        int l = 0; 
        int r = nums.size() - 1;
        int res = 0;

        while (l < r)
        {
            int sum = nums[l] + nums[r];
            if (sum == k)
            {
                res++;
                l++;
                r--;
            }
            else if (sum < k) l++;
            else              r--;
        }

        return res;
    }
};



int main(void)
{
    vector<int> nums = {1,2,3,4};


    std::cout << Solution::maxOperations(nums, 5) << std::endl;

    return 0;
}
