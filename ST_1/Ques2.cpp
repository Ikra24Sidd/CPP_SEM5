#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y, k, sum = 0;
		cin >> x >> y >> k;
		sum = x + y;
		int check = sum / k;
		if (check % 2 == 0 && check != 1)
			cout << "Seeta" << endl;
		else
			cout << "Geeta" << endl;
	}
	return 0;
}