#include <iostream>
using namespace std;

class clsPalindrom
{

public :
	
	static void is_Palindrom(string s)
	{
		string reversed = s;
        reverse(reversed.begin(), reversed.end());
        if (s == reversed) 
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
};

int main(void)
{
	string s;  cin >> s;

	clsPalindrom::is_Palindrom(s);

	return (0);
}
