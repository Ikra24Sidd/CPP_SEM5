#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a = 5, b = 4;
	int c = (a > b) ? a : b;  //this will store the greater among a and b in c
	cout << c << endl;
	(a > b) ? cout << "a is greater" : cout << "b is greater";
	return 0;
}

//Ternary operator->  ?:    (condition) ? true : false