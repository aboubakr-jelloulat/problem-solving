#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int element; cin >> element;
	int arr1[element], arr2[element];

	for (long i = 0; i < element; i++) cin >> arr1[i];
	for (long i = 0; i < element; i++) cin >> arr2[i];

	sort(arr1, arr1 + element);
	sort(arr2, arr2 + element);

	for (int i = 0; i < element; i++)
	{
		if (arr1[i] != arr2[i])
		{
			cout << "no";
			return 0;
		}
	}
	cout << "yes";

	return 0;
}
