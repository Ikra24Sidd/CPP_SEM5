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
		for (int i = 0; i < n / 2; i++)
		{
			count[arr[i]]++;
			count[arr[n - i - 1]]++;
		}
		sort(count, count + 10);
		for (int i = 0; i < 10; i++)
		{
			if (count[i] == 0)
				continue;
			else
			{
				if (i == 9)
					break;
				if (count[i] == count[i + 1])
				{
					flag = false;
					break;
				}
			}
		}
		if (flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		// if (flag)
		// 	cout << "Yes" << endl;
		// else
		// 	cout << "No" << endl;
	}

	return 0;
}