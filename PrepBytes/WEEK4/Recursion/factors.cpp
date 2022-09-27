#include <bits/stdc++.h>
using namespace std;

void solve(int n, int p, string s)
{
	if (n == 1)
		cout << s << endl;
	else
	{
		for (int i = p; i <= n; i++)
		{
			if (n % i == 0)
			{
				s += to_string(i);
				s.append(" ");
				solve(n / i, i, s);
			}
		}
	}
}
int main()
{
	int t, n, p;
	cin >> t;
	while (t--)
	{
		cin >> n;
		string s = "1  ";
		solve(n, p, s);
		// cout << s << endl;
	}
	return 0;
}
