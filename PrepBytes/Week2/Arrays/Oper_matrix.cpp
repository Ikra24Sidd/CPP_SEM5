#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int arr1[m][n], arr2[m][n], prod[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr1[i][j];
			prod[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr2[i][j];
		}
	}
	int sum[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				prod[i][j] = prod[i][j] + (arr1[i][k] * arr2[k][j]);
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << prod[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

