#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int h[n], maxH = -1, count = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> h[i];
		}
		for (int i = 0; i < n; ++i)
		{
			if (h[i] > maxH)
			{
				maxH = h[i];
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}