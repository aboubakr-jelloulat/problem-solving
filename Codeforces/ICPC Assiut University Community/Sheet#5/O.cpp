#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool is_palindrome(int nb)
{
	int reminder = 0;
	int tmp_nb = nb;
	int reverse_nb = 0;

	while (nb)
	{
		reminder = nb % 10;
		nb /= 10;

		reverse_nb = reverse_nb * 10 + reminder;
	}
	return (reverse_nb == tmp_nb) ? true : false;
}

bool is_prime(int nb)
{
	if (nb < 2)
		return false;
	if (nb == 2)
		return true;
	if (nb % 2 == 0)
		return false;

	for (long long i = 3; i <= sqrt(nb); i += 2) // Check odd numbers only
		if (nb % i == 0)
			return false;

	return true;
}

int count_divisors(int num)
{
	int count = 0;
	for (int i = 1; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			count++;
			if (i != num / i)
				count++;
		}
	}
	return count;
}

int main(void)
{
	int n;
	cin >> n;
	int arr[n];
	int prime_counter = 0;
	int palindrome_counter = 0;
	int max_div = 0;
	int max_number_of_divisors;
	int max_num = 0;

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (max < arr[i])
			max = arr[i];

		if (min > arr[i])
			min = arr[i];

		if (is_palindrome(arr[i]))
			palindrome_counter++;

		if (is_prime(arr[i]))
			prime_counter++;
		max_number_of_divisors = count_divisors(arr[i]);

		if (max_number_of_divisors > max_div || (max_number_of_divisors == max_div && arr[i] > max_num))
		{
			max_div = max_number_of_divisors;
			max_num = arr[i];
		}
	}

	cout << "The maximum number : " << max << endl;
	cout << "The minimum number : " << min << endl;
	cout << "The number of prime numbers : " << prime_counter << endl;
	cout << "The number of palindrome numbers : " << palindrome_counter << endl;
	cout << "The number that has the maximum number of divisors : " << max_num << endl;

	return 0;
}
