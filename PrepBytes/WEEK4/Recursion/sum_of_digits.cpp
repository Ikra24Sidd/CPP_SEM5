#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
	if (n == 0)
		return 0;
	else
		return n % 10 + sumOfDigits(n / 10);
}

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int sod = sumOfDigits(n);
		cout << sod << endl;
	}
	return 0;
}