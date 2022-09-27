#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string s;
	while (t--)
	{
		cin >> s;
		int count = 0;
		int n = s.length();
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'a')
				count++;
		}
		if (count > (n / 2))
		{
			cout << s.length() << endl;
		}
		else
		{
			while (count <= n / 2)
			{
				n--;
			}
			cout << n << endl;
		}
	}
	return 0;
}