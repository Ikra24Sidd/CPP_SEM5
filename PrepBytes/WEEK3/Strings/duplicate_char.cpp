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
		int count = 1;
		bool flag = false;
		sort(s.begin(), s.end());
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == s[i + 1])
			{
				flag = true;
				count++;
			}
			if (s[i] != s[i + 1] && count > 1)
			{
				cout << s[i] << "=" << count << " ";
				count = 1;
			}
		}
		if (!flag)
			cout << -1;
		cout << endl;
	}
	return 0;
}