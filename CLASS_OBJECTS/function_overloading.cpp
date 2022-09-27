#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

float add(int a, float b)
{
	return a + b;
}

float add(float a, int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}

int add(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	// cout << add(2, 4) << endl;
	// cout << add(3, 4.5f) << endl;
	// cout << add(5.2f, 2) << endl;
	// cout << add(1.5f, 4.7f) << endl;
	// cout << add(2, 4, 6) << endl;
	int a, b, c;
	float d, e;
	cin >> a >> b >> c >> d >> e;
	cout << add(a, b) << endl;
	cout << add(a, d) << endl;
	cout << add(d, b) << endl;
	cout << add(d, e) << endl;
	cout << add(a, b, c) << endl;
	return 0;
}