#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int arr1[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= j)
			{
				cout << arr1[i][j] << " ";
			}
			else
				cout << 0 << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i <= j )
			{
				cout << arr1[i][j] << " ";
			}
			else
				cout << 0 << " ";
		}
		cout << endl;
	}

	return 0;
}