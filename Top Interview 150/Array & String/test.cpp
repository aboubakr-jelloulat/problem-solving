#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int k = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            nums[k++] = nums[i];

            if (i + 1 != nums.size() &&  nums[i] == nums[i + 1])
                nums[k++] = nums[i++];
                
            while (i + 1 != nums.size() && nums[i] == nums[i + 1])
                i++;

        }
        return k;
    }
};

int main(void)
{
    Solution sol;

    vi nums = {0,0,1,1,1,1,2,3,3};

    int k = sol.removeDuplicates(nums);


    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";
    
    cout << endl;


    return 0 ;
}
