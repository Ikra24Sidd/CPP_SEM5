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
		int min = INT_MAX;
		int maxProfit = 0, currProfit = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
			currProfit = arr[i] - min;
			if (currProfit > maxProfit)
			{
				maxProfit = currProfit;
			}
		}
		cout << maxProfit << endl;
	}
	return 0;
}