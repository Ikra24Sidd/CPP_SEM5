#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j != i)
				cout << 1 << " ";
			else
				cout << 1;
		}
		cout << endl;
	}
	return 0;
}