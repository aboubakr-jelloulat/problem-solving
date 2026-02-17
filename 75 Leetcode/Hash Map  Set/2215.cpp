#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    static vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    { 
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> answer1;
        vector<int> answer2;

        for (int item : set1)
            if (!set2.count(item))
                answer1.push_back(item);


        for (int item : set2)
            if (!set1.count(item))
                answer2.push_back(item);

        
        return {answer1, answer2};
    }
};



int main(void)
{

    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4,6};

    vector<vector<int>> ans = Solution::findDifference(nums1, nums2);

    cout << "answer = ";
    for (int x : ans[0]) cout << x << " "; for (int x : ans[1]) cout << x << " ";

    cout << endl;

    return 0;
}


