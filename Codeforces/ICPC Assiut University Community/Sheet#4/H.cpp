#include <iostream>
#include <cstring>
using namespace std;

class clsGoodOrBad
{
	private :
		int    _t;
		bool	_Mode;

	public :
		clsGoodOrBad(int cases) :  _t(cases) {}
		
		void  GoodOrBad(void)
		{
			while (_t --)
			{
				string s; cin >> s;
				_Mode = false;
				for (int i = 0; i < s.length(); ++i)
				{
					if (s.substr(i, 3) == "101" || s.substr(i, 3) == "010")
					{
						_Mode = true;
					}
				}
				(_Mode) ? cout << "Good" << endl : cout << "Bad" << endl;
			}
		}
};

int main(void)
{
	short t;  cin >> t;

	clsGoodOrBad solve(t);
	solve.GoodOrBad();

	return (0);
}
