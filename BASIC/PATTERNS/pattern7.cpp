#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i - 1; j++)
		{
			cout << "   ";
		}
		for (int k = i; k <= n; k++)
		{
			cout << (n - i + 1) << "  ";
		}
		cout << endl;
	}
	return 0;
}


// 5

//OUTPUT
// 5  5  5  5  5
//    4  4  4  4
//       3  3  3
//          2  2
//             1