#include <iostream>
using namespace std;
int main()
{
	int a = 9;
	// int a = 5;
	int b = 5;
	int c;
	// c = a < b;      //o/p-> 0
	// c = a > b;      //o/p-> 1
	// c = a <= b;     //o/p-> 0
	// c = a >= b;     //o/p-> 1
	// c = a != b;     //o/p-> 1
	c = a == b;        //o/p-> 0
	cout << c;
	return 0;
}