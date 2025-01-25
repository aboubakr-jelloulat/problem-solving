#include <iostream>

using namespace std;

int main(void)
{
	string firstName1, LastName1, firstName2, LastName2;

	cin >> firstName1 >> LastName1;

	cin >> firstName2 >> LastName2;

	if (LastName1 == LastName2)
	{
		cout << "ARE Brothers";
	}
	else
		cout << "NOT";

	return (0);
}
