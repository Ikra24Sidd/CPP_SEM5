#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		char arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == 'x')
				count++;
		}
		cout << count << endl;
	}
	return 0;
}