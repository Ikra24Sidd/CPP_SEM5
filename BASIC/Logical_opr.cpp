#include <iostream>
using namespace std;
int main()
{

	// int a = 5;
	// int b = 3;
	// int c = a && b;   //o/p-> 1

	// int a = -1;
	// int b = -8;
	// int c = a && b;   //o/p-> 1

	int a = 0;
	int b = -8;
	int c = a && b;      //o/p-> 0

	cout << c;
	return 0;
}


// && -> gives output as 0 if any of the two inputs is 0
// || -> gives output as 1 if any of the input is not 0
//
