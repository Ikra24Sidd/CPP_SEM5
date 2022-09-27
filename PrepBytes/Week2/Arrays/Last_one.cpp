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
		int flag = false;
		for (int i = n - 1; i >= 0; i--)
		{
			if (arr[i] == 1)
			{
				cout << i << endl;
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << -1 << endl;
	}
	return 0;
}