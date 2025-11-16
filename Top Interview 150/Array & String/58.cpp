#include  <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    static int lengthOfLastWord(string s) 
    {
        std::stringstream ss(s);
        string word;

        while (ss >> word)
            ;

        return  word.length();
    }
};



int main()
{
    cout << "Length : " << Solution::lengthOfLastWord(" Hello Hej ") << endl;

    return 0;
}
