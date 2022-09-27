#include <bits/stdc++.h>
using namespace std;
// template <typename t>
template <class t>  //typename and class both are keyword, having same function
t square(t x)    // return type and datatype is t
{
	return x;
}

int main()
{
	/*typename: keyword -> if we will pass any datatype(int, float, double) to this, it will
	automatically convert t to that datatype*/
	int a = 9;
	float x = 8.1;
	double y = 9.2;
	string s = "hello";
	cout << square(a) << endl;
	cout << square(x) << endl;
	cout << square(y) << endl;
	cout << square(s) << endl;
	return 0;
}