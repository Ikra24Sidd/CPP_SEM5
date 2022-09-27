#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		long long sum = 0, max;
		for (int i = 0; i < k; i++)
		{
			sum += arr[i];
		}
		max = sum;
		int j = 0;
		for (int i = k; i < n; i++)
		{
			sum += arr[i] - arr[j++];
			if (sum > max)
				max = sum;
		}
		cout << max << endl;
	}
	return 0;
}