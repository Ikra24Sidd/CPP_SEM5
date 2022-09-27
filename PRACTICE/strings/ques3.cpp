#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (i == 0 || str[i - 1] == ' ')
		{
			char ch = str[i] - 32;
			cout << ch;
		}
		else
			cout << str[i];
	}
	return 0;
}