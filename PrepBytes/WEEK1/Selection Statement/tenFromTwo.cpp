#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, count = 0;
		cin >> n;
		while (true)
		{
			if (n % 10 == 0)
			{
				break;
			}
			count++;
			n *= 2;

		}
		cout << count << endl;
	}
	return 0;
}