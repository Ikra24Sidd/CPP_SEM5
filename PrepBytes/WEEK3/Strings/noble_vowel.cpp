#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		bool flag = true;
		int len = s.length() - 1;
		if (s[len] != 'a' && s[len] != 'e' && s[len] != 'i' && s[len] != 'o' && s[len] != 'u' && s[len] != 'n')
		{
			cout << "NO" << endl;
		}
		else
		{
			for (int i = 0; i < s.length() - 1; i++)
			{
				if (s[i] == 'n')
				{
					continue;
				}
				else if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
				{
					if (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')
					{
						continue;
					}
					else
					{
						cout << "NO" << endl;
						flag = false;
						break;
					}
				}
			}
			if (flag)
			{
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}