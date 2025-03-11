#include <iostream>
using namespace std;

void NewArray(int nb)
{
	long long  full[nb * 2],   arr1[nb],   arr2[nb];

	for (int i = 0; i < nb; ++i) cin >> arr1[i];

	for (int i = 0; i < nb; ++i)  cin >> arr2[i];

	for (int i = 0; i < nb ; i++)  full[i] = arr2[i];

	for (int i = nb, u = 0; i < nb * 2;u++,  i++) full[i] = arr1[u];

	

	for (int i = 0; i < nb * 2; i++)  cout << full[i] << " ";
	

}

int main(void)
{
	int nb;  cin >> nb;

	NewArray(nb);

	return 0;
}
