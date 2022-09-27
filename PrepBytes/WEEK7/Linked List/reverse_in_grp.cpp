#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> k;
	int s = 0, temp;
	do
	{
		for (int i = s, j = s + k - 1; i < j; i++, j--)
		{
			// if (j >= n)
			// {
			// 	j = n - 1;
			// }
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		s = s + k;
		// } while (s < n);
	} while (s < n - k + 1);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}