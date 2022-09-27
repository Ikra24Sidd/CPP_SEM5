#include <bits/stdc++.h>
using namespace std;

//z= (((a+b)+((c*d)/e))-((c*j)/k))
int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}

int divi(int a, int b)
{
	return a / b;
}
int main()
{
	int a, b, c, d, e, j, k;
	cin >> a >> b >> c >> d >> e >> j >> k;
	int x1 = add(a, b);
	int x2 = mult(c, d);
	int x3 = divi(x2, e);
	int x4 = add(x1, x3);
	int x5 = mult(c, j);
	int x6 = divi(x5, k);
	int x7 = sub(x4, x6);
	cout << x7;
	return 0;
}