#include <iostream>
#include <vector>
using namespace std;

/*
	Time & Space Complexity

		Time complexity:   O(n)
		Space complexity:  O(1)

*/

class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
		int k = 0;
	
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] != val)
				nums[k++] = nums[i];
			
	   return k;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 2, 3, 4};

	int k = sol.removeElement(nums, 2);
   
   cout << "Lenght : " << k << endl;


	cout << "Array elements : " << endl << endl;

	for (int i = 0; i < k; i++)
		cout << nums[i]  << " ";
	
	cout << endl;

    return 0;
}
