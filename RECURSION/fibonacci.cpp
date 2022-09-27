#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n > 1)
		return fib(n - 1) + fib(n - 2);
	return n;
}

int main()
{
	int n;
	cin >> n;
	// cout << fib(0, 1, n);
	for (int i = 0; i < n; ++i)
	{
		cout << fib(i) << " " << endl;
	}
	return 0;
}

// int fib(int a, int b, int n)
// {
// 	int c = a + b;
// 	if (c <= n)
// 	{
// 		a = b;
// 		b = c;
// 		fib(a, b, n);
// 		c = a + b;
// 	}
// 	else
// 		return c;
// 	// return 0;
// }

