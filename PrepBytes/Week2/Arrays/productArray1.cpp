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
		long long arr[n], ans[n], prod = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			prod *= arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			ans[i] = prod / arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}