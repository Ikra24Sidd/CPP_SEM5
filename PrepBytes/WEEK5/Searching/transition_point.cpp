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
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == 1)
			{
				cout << i << endl;
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}