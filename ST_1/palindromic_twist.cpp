#include <bits/stdc++.h>
using namespace std;

int checkPalindrome(string s)
{
	string s1;
	for (int i = 0, j = s.length() - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return 0;
	}
	return 1;
}

int main()
{
	int t, n;
	cin >> t;
	string s;
	while (t--)
	{
		cin >> n;
		cin >> s;
		bool flag = true;
		for (int i = 0, j = n - 1; i < n; i++, j--)
		{
			if (s[i] == s[j])
			{
				continue;
			}
			else
			{
				if ((s[i] + 1) == (s[j] + 1) || (s[i] - 1 == s[j] - 1) || (s[i] + 1 == s[j] - 1 ) || (s[i] - 1 == s[j] + 1))
					continue;
				else
				{
					flag = false;
					break;
				}
			}
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}