#include <bits/stdc++.h>
using namespace std;

int sumOfN(int n)
{
	if (n > 0)
		return n + sumOfN(n - 1);
	return 0;
}

int main()
{
	int n;
	cin >> n;
	cout << "Sum of N natural numbers: " << sumOfN(n);
	return 0;
}