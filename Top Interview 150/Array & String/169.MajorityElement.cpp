#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


typedef vector<int> vi;

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();

        k %= n;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());

    }
};


int main()
{
    Solution sol;

    vi nums {1,2,3,4,5,6,7};

    sol.rotate(nums, 3);


    for (int num : nums)
        cout << num << (char)32;
    
    cout << endl;


    return 0;
}
