#include <iostream>
using namespace std;

const int MAX_SIZE = 100000;
int arr[MAX_SIZE];
int tmp[MAX_SIZE];

int main(void)
{
	int cases; cin >> cases;

	while (cases--)
	{
		int size; cin >> size;

		for (int i = 0; i < size; i++) cin >> arr[i];
		
		for (int i = 0; i < size; i++)
		{
			for (int j = i; j < size; j++)
			{
				int u = 0;
                for (int k = i; k <= j; k++)
                {
                    tmp[u] = arr[k];
                    u++;
                }

				int max;
				max = tmp[0];
                for (int u = 0; u < (j - i + 1); u++)
                {
                    if (max < tmp[u])
						max = tmp[u];
                }
				cout << max << " ";
				
			}	
		}
		cout << endl;

	}

	return 0;
}
