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
		int min = 0;
		for (int i = 1; i < n; i++)
		{
			if (arr[i] < arr[min])
				min = i;
		}
		cout << min << endl;
	}
	return 0;
}