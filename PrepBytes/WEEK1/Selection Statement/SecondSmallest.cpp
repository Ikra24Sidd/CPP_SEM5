#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	int secMin;
	if (x < y && x < z)
	{
		if (y < z)
			secMin = y;
		else
			secMin = z;
	}
	else if (y < z && y < x)
	{
		if (x < z)
			secMin = x;
		else
			secMin = z;
	}
	else if (z < x && z < y)
	{
		if (x < y)
			secMin = x;
		else
			secMin = y;
	}
	cout << secMin;
	return 0;
}