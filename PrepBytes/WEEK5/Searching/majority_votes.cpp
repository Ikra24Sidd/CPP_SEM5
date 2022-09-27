#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int count = 1;
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == arr[i + 1])
				count++;
			else
			{
				if (count > n / 2)
				{
					cout << arr[i] << endl;
					flag = true;
					break;
				}
				count = 1;
			}
		}
		if (!flag)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}