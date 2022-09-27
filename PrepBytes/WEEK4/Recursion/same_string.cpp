#include <bits/stdc++.h>
using namespace std;

bool checkString(string s, int i, int n)
{
	if (i == n / 2)
		return true;
	if (s[i] == s[n - i - 1])
		return checkString(s, i + 1, n);
	else
		return false;
}

int main()
{
	int t;
	cin >> t;
	string s;
	while (t--)
	{
		cin >> s;
		int n = s.length();
		if (checkString(s, 0, n))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}