#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b;
	c = a + b;
	cout << "c = " << c;
	return 0;
}

//Max signed int value-> 2^31=2147483647
//Max unsigned int value-> 2^32=4294967296

//Input  1->  2147483647 2147483647
//Output 1->  c = -2143282753

//Input  2->  4294967297  5
//Output 2->  c = -2143282753

//Input  3->  -5 2147483647
//Output 3->  c = 2147483642

