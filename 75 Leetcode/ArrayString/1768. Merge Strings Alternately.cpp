#include <iostream>
#include <vector>
using namespace std;


class Solution 
{
public:
    static string mergeAlternately(string word1, string word2) 
    {
		string output = "";
		int i = 0, u = 0;
	
		while (word1[i] && word2[u])
		{
			output += word1[i++];
			output += word2[u++];
		}
		if (!word1[i])
			output.append(word2, u);
		if (!word2[u])
			output.append(word1, i);
		
        return output;
    }
};

int main()
{

	cout << Solution::mergeAlternately("a", "xyz") << endl;

	return 0;
}
 