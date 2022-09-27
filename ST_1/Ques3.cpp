#include <bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i + 1; j++)
		{
			if ((j == 1) || (j == 5 - i + 1) || i == 1)
				cout << ch << "  ";
			else
				cout << "   ";
		}
		cout << endl;
	}
	return 0;
}