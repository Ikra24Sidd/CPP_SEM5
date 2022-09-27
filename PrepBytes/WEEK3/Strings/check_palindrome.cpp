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
	string s, s1;
	bool flag;
	while (t--)
	{
		flag = false;
		cin >> n >> s;
		s1 = s;
		if (checkPalindrome(s))
		{
			cout << 1 << endl;
			flag = true;
		}
		else
		{
			for (int i = 0; i < s.length(); i++)
			{
				s.erase(s.begin() + i);
				if (checkPalindrome(s))
				{
					cout << 1 << endl;;
					flag = true;
					break;
				}
				else
				{
					s = s1;
				}
			}
			if (!flag)
				cout << 0 << endl;
		}

	}
	return 0;
}


