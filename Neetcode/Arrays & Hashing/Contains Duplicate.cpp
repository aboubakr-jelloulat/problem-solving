#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


/*
    Complexity : 

        Time Complexity	O(n)
        Space Complexity	O(n)

*/

class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        unordered_set <int> seen;
    
        for (int nb : nums)
        {
            if (seen.count(nb))
                return true;
            
            seen.insert(nb);
        }
        return false;      
    }
};



int main(void)
{
    Solution answer;

    vector <int> nums {1,2,3,1};

    (answer.hasDuplicate(nums)) ? cout  << "Yes Found Duplicate" : cout << "No, No Duplicate";

    cout << endl;

}


/*
    seen.count(x) :  Count occurrences of a particular element in an unordered set, returns : 

        1 if the value x is in the set

        0 if the value x is not in the set




*/
