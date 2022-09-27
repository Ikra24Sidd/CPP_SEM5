#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a = 8;
	int *ptr = NULL, **ptr1 = NULL;
	ptr = &a;
	ptr1 = &ptr;
	cout << *ptr << endl;    //8
	cout << **ptr1 << endl;   //8
	cout << ptr << endl;     //address of a
	cout << *ptr1 << endl;   // value at ptr i.e address of a
	cout << ptr1 << endl;    //adress of ptr
	return 0;
}