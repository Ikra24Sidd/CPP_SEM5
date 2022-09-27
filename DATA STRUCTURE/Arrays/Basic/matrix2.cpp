#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3], b[3][3], sum[3][3], diff[3][3];
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cin >> a[r][c];
		}
	}
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			cin >> b[r][c];
		}
	}
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			sum[r][c] = a[r][c] + b[r][c];
			cout << sum[r][c] << "  ";
		}
		cout << endl;
	}
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			sum[r][c] = a[r][c] - b[r][c];
			cout << sum[r][c] << "  ";
		}
		cout << endl;
	}
	return 0;
}