#include <iostream>
#include <algorithm>
using namespace std;

int i = 0;
void print(string nb)
{ 

	if(i == nb.length())
		return ;
	

	cout << nb[i] << " ";
	i++;
	print(nb);
}
int main()
{
	int _t;  cin>>_t;

	while(_t--)
	{
		string nb;  cin >> nb;

		print(nb);

		cout << endl;

		i=0;
	}
}
