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
		int vow = 0, con = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
				vow++;
			else
				con++;
		}
		// string::iterator sit;
		// for (sit = s.begin(); sit != s.end(); sit++)
		// {
		// 	if (*sit == 'A' || *sit == 'E' || *sit == 'I' || *sit == 'O' || *sit == 'U')
		// 		vow++;
		// 	else
		// 		con++;
		// }
		cout << vow << " " << con << endl;
	}
	return 0;
}