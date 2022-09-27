#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int temp, sum = 0, rem = 0;
	temp = n;
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
		cout << "Happy Number";
	else
		cout << "Not a happy number";
	return 0;
}