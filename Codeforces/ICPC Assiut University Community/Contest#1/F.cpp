#include <iostream>
using namespace std;

/*
	✅ The bitwise XOR (exclusive OR) is a binary operation that operates on the binary representations of two numbers. 
	It compares the corresponding bits of the two numbers and produces a result based on the following rule:

	✅ For each bit position:

		🚀 If exactly one of the bits is 1, the result is 1.

		🚀 If both bits are 0 or both bits are 1, the result is 0.

	🆘 exampleeeeeeeee :

		0 ^ 0 = 0
		0 ^ 1 = 1
		1 ^ 0 = 1
		1 ^ 1 = 0

*/


int main(void)
{
	unsigned int	a, b;	cin >> a >> b;

	cout << (a ^ b);

	return 0;
}
