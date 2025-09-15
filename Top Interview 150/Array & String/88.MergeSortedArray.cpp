#include <iostream>
#include <vector>
using namespace std;


/*
	Time & Space Complexity

		Time complexity:   O(n + m)
		Space complexity:  O(1)

*/

class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i(m - 1), j( n - 1), k(m + n - 1);
    
        while (j >= 0)
        {
            if (i >= 0 && nums1[i] > nums2[j])
                nums1[k] = nums1[i--];
            else
                nums1[k] = nums2[j--];
            k--;
        }
       
    }
};

int main()
{
    Solution sol;

    vector<int> nums1 = {1,2,3, 0, 0, 0};
    vector<int> nums2 = {2,5,6};

    sol.merge(nums1, 3, nums2, 3);

    for(auto x : nums1)
        cout << x << " ";

    cout << endl;

    return 0;
}
