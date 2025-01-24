#include <iostream>

using namespace std;

int Max(int A, int B, int C)
{
	int 	Max;

	if (A > B)
	{
		if (A > C)
			Max = A;
		else
			Max = C;
	}
	else
	{
		if (B > C)
			Max = B;
		else
			Max = C;
	}
	return (Max);
}

int Min(int A, int B, int C)
{
	int Min;

	if (A < B)
	{
		if (A < C)
			Min = A;
		else
			Min = C;
	}
	else
	{
		if (B < C)
			Min = B;
		else
			Min = C;
	}
	return (Min);

}

int main(void)
{
	int	A, B, C; cin >> A >> B >> C;

	cout << Min(A, B, C) << " " << Max(A, B, C);

	return (0);
}
