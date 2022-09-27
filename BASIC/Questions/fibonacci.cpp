#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Program to print first n fibonacci number

	// int n, a = 0, b = 1, c = 0;
	// cin >> n;
	// while (n != 0)
	// {
	// 	cout << a << " ";
	// 	c = a + b;
	// 	a = b;
	// 	b = c;
	// 	n--;
	// }


	//Program to print nth fibanacci number

	// int n, a = 0, b = 1, c = 0, fib;
	// cin >> n;
	// while (n != 0)
	// {
	// 	fib = a;
	// 	c = a + b;
	// 	a = b;
	// 	b = c;
	// 	n--;
	// }
	// cout << fib;


	//Program to check whether the number entered is a part of fibonacci series or not
	int n, a = 0, b = 1, c;
	cin >> n;
	//loop will run until we get a fibonacci number which is equal to or greater than n
	while (a < n)
	{
		c = a + b;
		a = b;
		b = c;
	}
	if (a == n)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}