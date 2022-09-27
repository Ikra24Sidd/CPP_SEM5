#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string s, t;
		cin >> s >> t;
		int j = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == t[j])
			{
				j++;
			}
			else
			{
				s[i] = ' ';
			}
		}
		string ss = "";
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ')
				continue;
			else
			{
				ss.push_back(s[i]);
			}
		}
		if (ss == t)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}


// int k = 0;
// 		string ss = "";
// 		for (int i = 0; i < s.length(); i++)
// 		{
// 			if (s[i] == ' ')
// 				continue;
// 			else
// 			{
// 				ss[k] = s[i];
// 				k++;
// 			}
// 		}