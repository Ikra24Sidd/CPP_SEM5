#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s, e;
	cin >> s >> e;
	for (int j = 20; j <= 200; j++)
	{
		int flag = true;
		for (int i = 2; i <= j / 2; i++)
		{
			if (j % i == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cout << j << " ";
	}
	return 0;
}