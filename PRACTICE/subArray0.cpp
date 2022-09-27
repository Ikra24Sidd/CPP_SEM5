//Program to print all the subarrays with sum 0
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
	int j, sum = 0;
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		flag = false;
		for (j = i; j < n; j++)
		{
			sum += arr[j];
			if (sum == 0)
			{
				flag = true;
				break;
			}
		}
		if (flag)
		{
			for (int k = i; k <= j; k++)
			{
				cout << arr[k] << " ";
			}
		}

		cout << endl;
	}
	return 0;
}