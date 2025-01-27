#include <iostream>

using namespace std;

int main(void)
{
	int	A, B;
	char	sign;

	cin >> A >> sign >> B;
	if (sign == '>' && A > B)
		cout << "Right";
	else if (sign == '<' && A < B)
		cout << "Right";
	else if (sign == '=' && A == B)
		cout << "Right";
	else
		cout << "Wrong";

	return (0);
}
