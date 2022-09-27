#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		bool flag = true;
		int arr[n], count[10] = {0};
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			count[arr[i]]++;
		}
		for (int i = 0; i < 10; i++)
		{
			if (count[i] % 2 != 0 || count[i] == 1)
			{
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}