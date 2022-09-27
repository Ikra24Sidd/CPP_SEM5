#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= i)
				cout << j;
			else
				cout << " ";
		}
		for (int j = 1; j <= n; j++)
		{
			if (j <= n - i)
				cout << " ";
			else
				cout << n - j + 1;
		}
		cout << endl;
	}
	return 0;
}