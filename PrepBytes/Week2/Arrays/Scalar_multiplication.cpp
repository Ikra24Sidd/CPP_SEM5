#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int arr[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			arr[i][j] *= k;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}