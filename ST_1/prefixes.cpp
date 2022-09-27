#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i += 2)
	{
		if (s[i] == s[i + 1])
		{
			count++;
			if (s[i] == 'a')
				s[i] = 'b';
			else
				s[i] = 'a';
		}
	}
	cout << count << endl;
	cout << s;
	return 0;
}