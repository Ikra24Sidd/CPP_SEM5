#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, key, value;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		cin >> key >> value;
		m[key] = value;
	}

	return 0;
}