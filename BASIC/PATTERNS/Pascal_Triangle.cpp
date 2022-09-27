#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int val = 1;
		for (int k = 1; k <= n - i; k++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << val << " ";
			val = val * (i - j) / j;
		}
		cout << endl;
	}
	return 0;
}