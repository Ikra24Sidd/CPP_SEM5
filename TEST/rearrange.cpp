#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int temp;
	for (int i = 1; i < n - 1; i = i + 2)
	{
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}