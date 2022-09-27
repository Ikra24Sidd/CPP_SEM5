#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n], temp;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

