#include <bits/stdc++.h>
using namespace std;
int main()
{
	double basic, hra = 0, da = 0, total;
	cin >> basic;
	if (basic <= 5000)
	{
		hra = 0.02 * basic;
		da = 0.02 * basic;
	}
	else if (basic <= 10000 && basic > 5000)
	{
		hra = 0.03 * basic;
		da = 0.03 * basic;
	}
	else if (basic <= 15000 && basic > 10000)
	{
		hra = 0.03 * basic;
		da = 0.035 * basic;
	}
	else
	{
		hra = 0.04 * basic;
		da = 0.045 * basic;
	}
	total = basic + da + hra;
	cout << "Total Salary= " << total;
	return 0;
}