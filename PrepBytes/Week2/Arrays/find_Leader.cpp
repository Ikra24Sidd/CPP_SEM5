#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		long long max = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			if (arr[i] >= max)
			{
				max = arr[i];
				cout << arr[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

//1 2 4 3 2