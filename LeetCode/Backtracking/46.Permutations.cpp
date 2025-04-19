#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
private:
    void _solve_permute(vector<int>& nums, vector<vector<int>>& result, int left, int level)
    {
        if (left == level)
        {
            result.push_back(nums);
            return ;
        }

        for (int i = left; i < nums.size(); i++)
        {
            swap(nums[left], nums[i]);
            _solve_permute(nums, result, left + 1, level);
            swap(nums[left], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        _solve_permute(nums, result, 0, nums.size());

        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {0, 1}; // case 2 

    vector<vector<int>> result = sol.permute(nums);

    for (const auto& vec : result)
    {
        for (int num : vec)
            cout << num << "\t";
        cout << endl;
    }

    return 0;
}
