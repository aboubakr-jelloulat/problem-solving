#include <iostream>

using namespace std;

bool is_alpha(int c)
{
	return(c >= 65 && c <= 90 || c >= 97 && c <= 122);
}

bool is_digit(int c)
{
	return (c >= 48 && c <= 57);
}


int main(void)
{
	char	c;
	cin >> c;

	if (is_digit(c))
	{
		cout << "IS DIGIT";
	}
	if (is_alpha(c))
	{
		cout << "ALPHA" << endl;
		if (c >= 65 && c <= 90)
			cout <<"IS CAPITAL";
		if (c >= 97 && c <= 122)
			cout << "IS SMALL";
	}

	return (0);
}
