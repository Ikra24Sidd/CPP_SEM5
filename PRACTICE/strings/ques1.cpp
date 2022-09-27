#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	// cin >> str;
	getline(cin, str);
	// string::reverse_iterator rsit;
	// for (rsit = str.rbegin(); rsit != str.rend(); rsit++)
	// {
	// 	cout << *rsit;
	// }
	for (int i = str.length() - 1; i >= 0 ; i--)
	{
		cout << str[i];
	}
	return 0;
}