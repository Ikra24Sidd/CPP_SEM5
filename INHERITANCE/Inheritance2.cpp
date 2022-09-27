//MULTILEVEL INHERITANCE

#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
	int age;
protected:
	int rollno;
public:
	string Name;
};

class derived_class1: public BaseClass
{
	string email;
public:
	char sex;
	void input()
	{
		cin >> rollno;
		cin >> email;
	}
	void display()
	{
		cout << rollno << endl;
		cout << email << endl;
	}
};

class derived_class2: private derived_class1
{
public:
	float marks;
	void input1()
	{
		cin >> sex;
		cin >> marks;
		cin >> Name;    //std::string BaseClass::Name' is inaccessible within this context
	}
	void display1()
	{
		cout << sex << endl;
		cout << marks << endl;
		cout << Name << endl;     //std::string BaseClass::Name' is inaccessible within this context
	}
};

int main()
{
	// derived_class1 d1;
	// d1.input();
	// d1.display();
	derived_class2 d2;
	d2.input1();
	d2.display1();
	return 0;
}