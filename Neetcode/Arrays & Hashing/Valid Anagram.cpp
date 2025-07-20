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


class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        
    }
};



int main(int ac, char **av)
{
    Solution answer;

    (answer.isAnagram(av[1], av[2])) ? cout << "true" : cout << "false";

    cout << endl;

}