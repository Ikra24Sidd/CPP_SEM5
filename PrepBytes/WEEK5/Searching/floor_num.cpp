#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long t, n, x;
	cin >> t;
	while (t--)
	{
		cin >> n >> x;
		long long arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > x)
			{
				flag = true;
				if (i == 0)
					cout << -1 << endl;
				else
					cout << i - 1 << endl;
				break;
			}
		}
		if (!flag)
			cout << n - 1 << endl;
	}
	return 0;
}