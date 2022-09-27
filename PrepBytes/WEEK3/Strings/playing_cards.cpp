#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string tcard, hcard;
	bool flag;
	while (t--)
	{
		flag = false;
		cin >> tcard;
		for (int i = 0; i < 5; i++)
		{
			cin >> hcard;
			if (hcard[0] == tcard[0] || hcard[1] == tcard[1])
				flag = true;
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}