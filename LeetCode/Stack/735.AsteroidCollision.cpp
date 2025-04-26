#include <iostream>
#include <stack>
#include <vector>

using namespace std;

# define v vector <int>
#define tk  stack <int>

class Solution 
{
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
		tk stk;
		v result;
	
		for (int i = 0; i < asteroids.size(); i++)
		{
			bool	is_exploaded = false;
			while (!stk.empty() && asteroids[i] < 0 &&  0 <= stk.top())
			{
				if (stk.top() < -asteroids[i])
				{
					stk.pop();
					continue; // skip is_exploaded case : [4, 5, -10] ? 
					// continue It skips the remaining code inside the while (not for)
					// and starts the while again immediately.
							
				}
				else if (stk.top() == -asteroids[i])
					stk.pop();
				is_exploaded = true;
				break ;
			}
			if (!is_exploaded) stk.push(asteroids[i]);
		}

		while (!stk.empty())
			result.push_back(stk.top()), stk.pop();

		reverse(result.begin(), result.end());
		return result;
    }
};

int main(void)
{
	Solution	solve;
	v vec{-2,-2,-2,-2}; // test 177

	v result =  solve.asteroidCollision(vec);

	for (int &c : result)
		cout << c << " ";

	return 0;
}
