#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution 
{
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        long long sub_sum = 0;
        long long max_sum = 0;

       
        for (int i = 0; i < k; i++)
            sub_sum += nums[i];

        max_sum = sub_sum;

       
        for (int i = k; i < nums.size(); i++)
        {
            sub_sum += nums[i]; 
            sub_sum -= nums[i - k];

            max_sum = std::max(max_sum, sub_sum);
        }

        
        return ((double)max_sum / k);
    }
};
