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
		int maxLen = -1;
		for (int i = 0; i < s.length(); i++)
		{
			int chars1[26] = {0};
			int chars2[26] = {0};
			int c1 = 0, c2 = 0;
			for (int j = i; j < s.length(); j++)
			{
				int ch = s[j] - 'a' + 1;
				// cout << ch << " ";
				if (chars1[ch] == 0)
				{
					chars1[ch]++;
					c1++;
				}
				else
				{
					break;
				}
			}
			for (int j = 0; j < s.length() - i; j++)
			{
				int ch = s[j] - 'a' + 1;
				if (chars2[ch] == 0)
				{
					chars2[ch]++;
					c2++;
				}
				else
				{
					break;
				}
			}
			int currLen = max(c1, c2);
			if (currLen > maxLen)
			{
				maxLen = currLen;
			}
		}
		cout << maxLen << endl;
	}
	return 0;
}