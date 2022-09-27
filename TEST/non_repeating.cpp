#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n], temp[10] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] == arr[i + 1] || arr[i] == arr[i - 1])
		{
			continue;
		}
		else
			cout << arr[i] << " ";
	}
	return 0;
}