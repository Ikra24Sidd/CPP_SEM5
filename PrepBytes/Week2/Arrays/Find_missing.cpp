#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long arr[n - 1], sum1 = 0, sum2 = 0;
		for (int i = 0; i < n - 1; i++)
		{
			cin >> arr[i];
			sum1 += arr[i];
		}
		// int idx;
		// for ( int j = 0; j < n - 1; j++)
		// {
		// 	idx = arr[j];
		// 	arr1[idx] = arr[j];
		// }
		// for (int i = 1; i < n; i++)
		// {
		// 	if (arr1[i] != i)
		// 	{
		// 		cout << i << endl;
		// 		break;
		// 	}
		// }
		sum2 = (n * (n + 1)) / 2;
		long long res = sum2 - sum1;
		cout << res << endl;

	}
	return 0;
}