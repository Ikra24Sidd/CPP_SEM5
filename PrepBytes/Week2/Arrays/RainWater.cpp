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
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int total = 0, right[n], left[n];
		right[n - 1] = arr[n - 1];
		left[0] = arr[0];
		for (int i = 1; i < n; i++)
		{
			if (arr[i] > left[i - 1])
			{
				left[i] = arr[i];
			}
			else
				left[i] = left[i - 1];
		}
		for (int i = n - 2; i >= 0; i--)
		{
			if (arr[i] > right[i + 1])
			{
				right[i] = arr[i];
			}
			else
				right[i] = right[i + 1];
		}
		for (int i = 1; i < n - 1; i++)
		{
			total = total + (min(left[i], right[i]) - arr[i]);
		}
		cout << total << endl;
	}
	return 0;
}