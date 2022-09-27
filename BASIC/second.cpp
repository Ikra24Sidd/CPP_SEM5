#include <iostream>
using namespace std;
int main()
{
	unsigned int a, b, c;
	cin >> a >> b;
	c = a + b;
	cout << "c = " << c;
	// cout << sizeof(a);
	return 0;
}


//Max signed int value-> 2^31=2147483647
//Max unsigned int value-> 2^32=4294967296

//Input  1->  -5  4294967296
//Output 1->  c = 4294967290

//Input  2->  42949672.96  5
//Output 2->  c = 4200895

//Input  3->  -5 6
//Output 3->  c = 1