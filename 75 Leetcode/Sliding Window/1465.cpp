#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class Solution 
{
    static bool _is_vowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c== 'o'|| c == 'u');
    }

public:
    static int maxVowels(string s, int k) 
    {
        int max_sum = 0;
        int sub_max = 0;

        for (int i = 0; i < k; i++)
            if (_is_vowel(s[i]))
                sub_max++;
        
        max_sum = sub_max;
        for (int i = k; i < s.length(); i++)
        {
            // sub_sum += nums[i]; 
            // sub_sum -= nums[i - k];

            if (_is_vowel(s[i]))
                sub_max++;
            
            if (_is_vowel(s[i - k]))
                sub_max--;
            
            max_sum = std::max(max_sum, sub_max);
        }
        
        return max_sum;
    }
};


int main()
{
    
    std::cout << Solution::maxVowels("abciiidef", 3) << std::endl;

    return 0;
}
