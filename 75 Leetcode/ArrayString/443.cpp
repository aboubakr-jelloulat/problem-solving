#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution 
{
public:

    static int compress(vector<char>& chars) 
    {
        if (chars.size() == 1)
            return 1;

        vector<char> res;
        int count = 1;

        for (int i = 0; i < chars.size(); i++)
        {
            if (i == chars.size() - 1 || chars[i] != chars[i + 1])
            {
                res.push_back(chars[i]);

                if (count > 1)
                {
                    string countStr = to_string(count);
                    for (char c : countStr) 
                    {
                        res.push_back(c);
                    }
                }

                count = 1; 
            }
            else
            {
                count++; 
            }
        }

        
        for (int i = 0; i < res.size(); i++) chars[i] = res[i];
        

        return res.size();
    }
};

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
   
    int newLength = Solution::compress(chars);
    cout << newLength << endl;

    for (int i = 0; i < newLength; i++) 
        cout << chars[i] << " ";
    cout << endl;

    return 0;
}
