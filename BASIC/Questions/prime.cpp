#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "Not prime";
		return 0;
	}
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			cout << "Not prime";
			return 0;
		}
	}
	cout << "Prime";
	return 0;
}