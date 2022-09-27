#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, rem;
		cin >> n;
		while (n != 0)
		{
			rem = n % 10;
			n /= 10;
		}
		cout << rem << endl;
	}
	return 0;
}