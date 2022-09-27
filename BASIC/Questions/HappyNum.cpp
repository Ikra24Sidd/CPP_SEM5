#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int temp, rem, sum = 0;
	temp = num;
	while (sum != 1 && sum != 4)
	{
		sum = 0;
		while (temp != 0)
		{
			rem = temp % 10;
			sum = sum + (rem * rem);
			temp = temp / 10;
		}
		temp = sum;
	}
	if (sum == 1)
		cout << "happy number";
	else
		cout << "not happy number";
	return 0;
}