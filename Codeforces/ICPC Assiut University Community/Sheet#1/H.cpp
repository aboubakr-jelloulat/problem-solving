#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	double A, B, Div; cin >> A >> B;

	Div = A / B;
	cout << "floor " << A  << " / " <<  B  << " = " <<floor(Div) << endl;
	cout << "ceil "  << A  << " / " << B   << " = " << ceil(Div) << endl;
	cout << "round " << A  << " / " << B   << " = " << round(Div) << endl;

	return (0);
}
