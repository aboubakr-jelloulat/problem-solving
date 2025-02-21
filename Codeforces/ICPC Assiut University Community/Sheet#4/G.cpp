#include <iostream>
using namespace std;

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int main(void)
{
	string s; getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ',')
			cout << " ";
		else if (ft_islower(s[i]))
			cout << (char)ft_toupper(s[i]);
		else
			cout << (char)ft_tolower(s[i]);
	}

	return 0;
}
