#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	long long size, t; cin >> size >> t;

	string s;  cin >> s;
	while (t--)
	{
		string query; cin >> query;
	
		if (query == "pop_back")
		{
			if (!s.empty())
				s.pop_back();
		}
		else if (query == "front")
		{
			if (!s.empty())
				cout << s.front() << endl;
		}
		else if (query == "back")
		{
			if (!s.empty())
				cout << s.back() << endl;
		}
		else if (query == "sort")
		{
			if (!s.empty())
			{
				long from, to; cin >> from >> to;
				from --, to--;
				long long ma_x = max(from, to), mi_n = min(from, to);
				sort(s.begin() + mi_n, s.begin() + ma_x + 1);
			}
		}
		else if (query == "reverse")
		{
			if (!s.empty())
			{
				long from, to; cin >> from >> to;
				from --, to--;
				long long ma_x = max(from, to), mi_n = min(from, to);
				reverse(s.begin() + mi_n, s.begin() + ma_x + 1);
			}
		}
		else if (query == "print")
		{
			if (!s.empty())
			{
				int pos; cin >> pos;
				pos --;
				cout << s[pos] << endl;
			}
		}
		else if (query == "substr")
		{
			if (!s.empty())
			{
				long from, to; cin >> from >> to;
				from --, to--;
				long long ma_x = max(from, to), mi_n = min(from, to);
				cout << s.substr(mi_n, ma_x - mi_n + 1) << endl;
				
			}
		}
		else if (query == "push_back")
		{
			char x; cin >> x;
			//s += x;
			s.push_back(x);
		}

	}
	

	return 0;
}
