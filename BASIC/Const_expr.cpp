#include <bits/stdc++.h>
using namespace std;
int main()
{
	// if we dont use const keyword while declaring a and b, it will generate an error because
	// a and b are in constant expression and so it should be declared as constant
	const int a = 8, b = 5;
	constexpr int i{a + b};
	cout << i;
	return 0;
}