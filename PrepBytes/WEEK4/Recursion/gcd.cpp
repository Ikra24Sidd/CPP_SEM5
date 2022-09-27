#include <bits/stdc++.h>
using namespace std;

void gcd(int n, int p)
{
	if (n == p)
		cout << n << endl;
	else
	{
		if (n > p)
			gcd(n - p, p);
		else
			gcd(n, p - n);
	}
}

int main()
{
	int t, n, p;
	cin >> t;
	while (t--)
	{
		cin >> n >> p;
		gcd(n, p);
	}
	return 0;
}