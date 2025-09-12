#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {

        unordered_map <string, vector<string>>;

        
    }
};

int main()
{
    vector <string> nums {"eat","tea","tan","ate","nat","bat"};

    Solution sol;
    vector<vector<string>>    res = sol.groupAnagrams(nums);

    for (auto item : &res)
    {
        cout << item;
    }


    return 0;
}

