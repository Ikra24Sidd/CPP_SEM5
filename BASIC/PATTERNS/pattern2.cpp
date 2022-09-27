#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = 0;
	for (int i = 1; i <= n; i++)
	{
		k += i;
	}
	for (int i = n; i >= 1; i--)
	{
		for (int j = i ; j >= 1; j--)
		{
			cout << k << "\t";
			k--;
		}
		cout << endl;
	}
	return 0;
}


// 4

// OUTPUT
// 10      9       8       7
// 6       5       4
// 3       2
// 1