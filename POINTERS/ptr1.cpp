#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x = 10;
	int *y = NULL; //if we dont want to store any address to a pointer while declaring, then
	//we should initialize it with NULL, so that it wont point to some unwanted address
	// y = &x;
	int a[10];
	a[0] = 5;
	a[9] = 9;
	y = a;
	// y = &a[9];
	// we dont need to use & sign for the array because array name itself points to the
	// address of the first element of the array

	//IMP- if we want to get the address of some other index variable other than first in
	// the array, then we should use & sign
	cout << y << endl;
	cout << *y;
	return 0;
}