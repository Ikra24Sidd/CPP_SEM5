#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	while (n != m)
	{
		if (n > m)
			n -= m;
		else
			m -= n;
	}
	cout << n;
	return 0;
}