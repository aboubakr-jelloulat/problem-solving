#include <iostream>
using namespace std;

int main(void)
{
	int Room;  cin >> Room;
	int movein = 0, live, capacity;

	while (Room --)
	{
		cin >> live >> capacity;
	
		if ((capacity - live) >= 2)
			movein++;
		
	}

	cout << movein << endl;


	return 0;
}
