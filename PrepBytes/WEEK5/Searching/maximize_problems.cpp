#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int maxPossible = 240 - k, count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (5 * i <= maxPossible)
		{
			count++;
			maxPossible -= 5 * i;
		}
	}
	cout << count;
	return 0;
}