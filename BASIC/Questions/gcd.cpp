#include <bits/stdc++.h>
using namespace std;
int main()
{
	int min, num1, num2;
	cin >> num1 >> num2;
	min = (num1 < num2) ? num1 : num2;
	int i = 1, gcd = 1;
	if (num1 % num2 == 0)
		gcd = num2;
	else if (num2 % num1 == 0)
		gcd = num1;
	else
	{
		while (i <= min)
		{
			if (num1 % i == 0 && num2 % i == 0)
				gcd = i;
			i++;
		}
	}
	cout << "GCD = " << gcd;
	return 0;
}