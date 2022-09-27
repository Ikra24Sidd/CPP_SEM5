#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		char ch = 65 + n - i;
		for (int j = 1; j <= i - 1; j++)
		{
			cout << "  ";
		}
		for (int k = i; k <= n; k++)
		{
			if (k == i)
				cout << ch << " ";
			else
				cout << "  ";
		}
		for (int l = i; l <= n - 1; l++)
		{
			if (l == n - 1)
				cout << ch << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}


// 5

//OUTPUT
// E               E
//   D           D
//     C       C
//       B   B
//         A