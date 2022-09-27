#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int n, m, top, bottom, left, right;
	while (t--)
	{
		cin >> n >> m;
		int arr[n][m];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> arr[i][j];
			}
		}
		top = 0, bottom = n - 1, left = 0, right = m - 1;
		while (top <= bottom && left <= right)
		{
			for (int i = left; i <= right; i++)
			{
				cout << arr[top][i] << " ";
			}
			top++;
			for (int i = top; i <= bottom; i++)
			{
				cout << arr[i][right] << " ";
			}
			right--;
			if (top <= bottom)
			{
				for (int i = right; i >= left; i--)
				{
					cout << arr[bottom][i] << " ";
				}
				bottom--;
			}
			if (left <= right)
			{
				for (int i = bottom; i >= top; i--)
				{
					cout << arr[i][left] << " ";
				}
				left++;
			}
		}
		cout << endl;
	}
	return 0;
}