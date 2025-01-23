#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	double	R;
	const double	PI = 3.141592653;

	cin >> R;

	cout << fixed << setprecision(9) << PI	* (R * R) ;

	return (0);
}
/*
	✅ The fixed manipulator is used to format floating-point numbers in fixed-point notation.

	✅ What it does: When fixed is used, the number is displayed with a fixed number of digits
	after the decimal point, regardless of the value of the number.

*/

/*

	✅ The setprecision manipulator is used to set the number of significant digits or 
	decimal places to display for floating-point numbers.

*/
