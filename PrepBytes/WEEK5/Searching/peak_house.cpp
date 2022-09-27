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
		int max = -1, pos = -1;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
				pos = i;
			}
		}
		cout << pos << endl;
	}
	return 0;
}