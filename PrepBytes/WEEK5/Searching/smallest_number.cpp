#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> k;
	sort(arr, arr + n);
	int count = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i + 1])
			count++;
		else
		{
			if (count == k)
			{
				cout << arr[i] << endl;
				break;
			}
			count = 1;
		}
	}
	return 0;
}