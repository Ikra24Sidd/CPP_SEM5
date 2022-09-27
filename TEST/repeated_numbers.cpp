#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int c = 1;
	map<int, int, greater<int>> m;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			c++;
		}
		else
		{
			if (c > 1)
			{
				m[arr[i]] = c;
				c = 1;
			}
		}
	}
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}
	return 0;
}

// 2 5 3 2 4 5 3 6 7 3
//2 2 3 3 3 4 5 5 6 7