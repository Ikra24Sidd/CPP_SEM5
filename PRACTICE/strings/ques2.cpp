#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		char chNext = str[i] + 1;
		cout << chNext;
	}
	return 0;
}