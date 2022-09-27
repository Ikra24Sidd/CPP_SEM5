#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	int sum1 = 0, sum2 = 0;
	cout << "Upper triangle = ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				cout << arr[i][j] << " ";
				sum1 += arr[i][j];
			}
		}
	}
	cout << endl;
	cout << "Sum of upper triangle = " << sum1 << endl;
	cout << "Lower triangle = ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				cout << arr[i][j] << " ";
				sum2 += arr[i][j];
			}
		}
	}
	cout << endl;
	cout << "Sum of lower triangle = " << sum2 << endl;
	return 0;
}