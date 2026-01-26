#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static int compress(vector<char>& chars) 
	{
		if (chars.size() == 1)
			return 1;

		vector<char> outs;
		int count = 1;

		for (int i = 0; i < chars.size() - 1; i++)
		{
			if (chars[i] != chars[i + 1])
			{
				outs.push_back(chars[i] + 48);
				if (count > 10)
				{
					// fra9 dok nums like 12 => 1, 2

					std::string nums = to_string(count);
					outs.push_back(nums[0]);
					outs.push_back(nums[1]); // maybe num is big like 222222
				}
				else if (count != 1)
					outs.push_back(count);
				
				count = 0;
			}
			else
			{
				count ++;
				
			}

		}

		return (outs.size());
    }
};

int main(void)
{
	vector<char> nums = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

	std::cout << Solution::compress(nums) << std::endl;

	for (auto &x : nums) std::cout << x << std::endl;
	

	return 0;
}
