#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n;
		long long arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cin >> k;
		long long f = -1, l = -1;
		for (int i = 0, j = n - 1; i < j;)
		{
			if (arr[i] + arr[j] == k)
			{
				f = i;
				l = j;
				break;
			}
			if (arr[i] + arr[j] > k)
			{
				j--;
			}
			if (arr[i] + arr[j] < k)
			{
				i++;
			}
		}
		if (f != -1)
		{
			cout << f << " " << l << endl;
		}
		else
			cout << "no answer" << endl;
	}
	return 0;
}