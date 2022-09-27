#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int qty, price;
		cin >> qty >> price;
		double cost;
		cost = price * qty;
		if (qty > 100)
		{
			int disc = 0.2 * cost;
			cost -= disc;
		}
		cout << fixed << setprecision(1) << cost << endl;
	}
	return 0;
}