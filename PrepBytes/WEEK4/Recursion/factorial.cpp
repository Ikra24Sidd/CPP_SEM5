#include <bits/stdc++.h>
using namespace std;

int Fact(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return n * Fact(n - 1);
}
int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int fact = Fact(n);
		cout << fact << endl;
	}
	return 0;
}