#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string s;
	int opr;
	char ch1, ch2;
	while (t--)
	{
		opr = 0;
		cin >> s;
		for (int i = 0; i < s.length() / 2; i++)
		{
			ch1 = s[i];
			ch2 = s[s.length() - i - 1];
			if (ch1 == ch2)
			{
				continue;
			}
			else
			{
				opr += max(ch1, ch2) - min(ch1, ch2);
			}
		}
		cout << opr << endl;
	}
	return 0;
}