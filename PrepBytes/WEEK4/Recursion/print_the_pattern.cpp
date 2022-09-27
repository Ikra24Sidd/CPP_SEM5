#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
	cout << n << " ";
	if (n <= 0)
	{
		return;
	}
	else
	{
		printPattern(n - 5);
		cout << n << " ";
	}
}

int main()
{
	int t;
	cin >> t;
	int n;
	while (t--)
	{
		cin >> n;
		printPattern(n);
		cout << endl;
	}
	return 0;
}