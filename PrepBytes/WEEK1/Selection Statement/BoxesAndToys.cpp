#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, count = 0;
	cin >> n;
	while (n--)
	{
		int t, c;
		cin >> t >> c;
		if (c - t >= 2)
			count++;
	}
	cout << count;
	return 0;
}