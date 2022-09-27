#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a = {0b1010};
	// int x = ~a;
	// cout << x;       //o/p-> -11 //it will flip the bits 1 as 0 and 0 as 1
	int b = {0b1111};
	// int c = a & b;  	//o/p-> 10  //1 if both the inputs are 1
	// int c = a | b;  	//o/p-> 15  //1 if any of the inputs are 1
	// int c = a ^ b;      //o/p-> 5   //1 if both inputs are different
	int c = ~b;
	cout << c << endl;
	int d = 17;
	cout << ~d << endl;
	int x = 0b1010;
	int y = x << 1;   // <<(left shift) by 1 will multiply the value by 2
	cout << y << endl;
	int m = 0b1010;
	int n = m >> 1;   // >>(right shift) by 1 will divide the value by 2
	cout << n << endl;
	return 0;
}

// ~ will convert the 0 bits to 1 and vice versa and then add 1 to the total with a negative sign
// same with a decimal number , it will add 1 with a negative sign.
