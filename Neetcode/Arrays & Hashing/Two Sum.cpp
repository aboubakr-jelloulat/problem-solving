#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution 
{
public:

    /* 
        Hash Map Two Pass : 

        Time & Space Complexity

            Time complexity:  O(n)

            Space complexity: O(n)


    */


    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // Pass 1: Build the map 

        unordered_map <int, int> map;

        for (int i = 0; i < nums.size(); i++)
            map[nums[i]] = i;
        
        // Pass 2: Find the complement

        for (int i = 0; i < nums.size(); i++)
        {
            int difference  = target - nums[i];

            if (map.count(difference) && map[difference] != i)  /* Check if complement exists   &&   ensures you don’t use the same number twice map[difference] returns the index (position) of the difference number*/
            {
                return {i, map[difference]};
            }
        }
       return { };
    }
};


int main(void)
{
    Solution sol;

    vector <int> nums = {2, 7, 11, 15};

    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    for (int nb : result)
    {
        cout << nb << " ";
    }

    cout << endl;

    return 0;
}

