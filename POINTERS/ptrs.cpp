#include <bits/stdc++.h>
using namespace std;

//priority order-
/* 1- postfix increment/decrement
   2- prefix increment/decrement    deference
   as the last 2- has the same priority, we will check the associativity which is r to l*/

int main()
{
	int a = 10;
	int *ptr = &a;
	cout << *ptr++ << endl;          // *(ptr++)
	cout << ++*ptr << endl;          // ++(*ptr)
	cout << *++ptr << endl;          // *(++ptr)
	cout << (*ptr)++ << endl;
	cout << *ptr;

	// ptr - 2;
	// cout << *ptr ;
	// char c = 'q';
	// char *cptr = &c;
	// // *cptr--;
	// cout << cptr;
	return 0;
}