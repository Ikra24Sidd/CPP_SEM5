#include <bits/stdc++.h>
using namespace std;
int main()
{
	string name = "Hello";
	// cout << name.length();
	// cout << sizeof(name);
	cout << name << endl;
	name.push_back('!');    //this will insert/push the given character at end of the string
	cout << name << endl;
	name.pop_back();        //this will remove/pop the last character from string
	cout << name << endl;
	name.resize(3);         //this will resize the array to given length
	cout << name << endl;

	//char name[10];
	//cin.get(name, 5);
	//this will input only 4 characters, although we can enter
	// character until we press enter, but only 4 characters will be stored,
	// as the last character will be NULL, so 4 char only
	//cout << name;   //5 characters displayed including NULL
	return 0;
}