#include <bits/stdc++.h>
using namespace std;


class Solution 
{
public:
    static bool increasingTriplet(vector<int>& nums) 
    {
        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums)
        {
            if (num <= first)
                first = num;
            
            else if (num <= second)
                second = num;
            
            else
                return true;
        }
        
        return false;
    }
};


int main(void)
{

    vector<int> nums{-1, 0, -4, 1, 2, 4};

    cout << Solution::increasingTriplet(nums) << endl;

    return 0;
}
