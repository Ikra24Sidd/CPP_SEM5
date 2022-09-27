#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, x;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int arr[n];
		// int arr1[n],k;
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cin >> x;
		for (int i = 0, j = n - 1; i <= j; i++, j--)
		{
			if (arr[i] == x)
			{
				cout << i << endl;
				flag = true;
				break;
			}
			else if (arr[j] == x)
			{
				cout << j << endl;
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << -1 << endl;
	}
	return 0;
}