#include <iostream>
using namespace std;

static bool is_lucky_number(long long nb)
{
	long long Reminder = 0;

	while (nb != 0)
	{
		Reminder = nb % 10;
		if (Reminder == 7 || Reminder == 4)
		{
			nb /= 10;
		}
		else
			return false;
	}
	return true;
}

int main(void)
{
	long long A, B, i; cin >> A >> B;

	bool found = false;

	for (i = A; i <= B; i++)
	{
		if (is_lucky_number(i))
        {
            cout << i << " ";
			found = true;
        }
		
	}
	if (!found)
		cout << "-1";

	return 0;
}
