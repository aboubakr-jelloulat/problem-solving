#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;


//   ************  1. Sorting   ************

/*
    Time & Space Complexity :

        Time complexity:  O(nlogn + mlog m)
        Space complexity: O(1) or O(n+m) depending on the sorting algorithm

*/

/*

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())   return false;


        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return t == s;
    }
};


*/



//   ************  2. Hash Map   ************  


/*
    Time & Space Complexity :

        Time complexity:  O(n+m)
        Space complexity: O(1)

*/

class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length())
            return false;

        vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int nb : count)
            if (nb)
                return false;
        
        return true;
    }
};


int main(int ac, char **av)
{
    if (ac < 3) {
        cout << "Usage:  <string1> <string2>" << endl;
        return 1;
    }
    Solution answer;

    (answer.isAnagram(av[1], av[2])) ? cout << "true" : cout << "false";

    cout << endl;

}
