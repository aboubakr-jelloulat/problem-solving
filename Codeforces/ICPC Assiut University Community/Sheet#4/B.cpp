#include <iostream>
using namespace std;

int main(void)
{
	string s;  getline(cin, s);

	const char *ptr = s.c_str(); 
    while (*ptr)
    {
        if (*ptr == '\\')
            break;
        cout << *ptr;
        ptr++;
    }

	return (0);
}
