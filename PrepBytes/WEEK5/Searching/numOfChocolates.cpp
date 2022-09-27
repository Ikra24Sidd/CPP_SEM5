#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, q;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> q;
	int x[q], count;
	sort(arr, arr + n);
	for (int i = 0; i < q; i++)
	{
		cin >> x[i];
		count = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[j] <= x[i])
			{
				count++;
			}
			else
				break;
		}
		cout << count << endl;
	}
	return 0;
}