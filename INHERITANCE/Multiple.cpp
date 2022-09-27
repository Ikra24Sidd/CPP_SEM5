//MULTIPLE INHERITANCE

#include <bits/stdc++.h>
using namespace std;

class BaseClass1
{
	int age;
protected:
	int rollno;
public:
	void input1()
	{
		cin >> age;
		cin >> rollno;
	}
	void display1()
	{
		cout << age << endl;
		cout << rollno << endl;
	}
};

class BaseClass2
{
	int group;
protected:
	string name;
public:
	void input2()
	{
		cin >> group;
		cin >> name;
	}
	void display2()
	{
		cout << group << endl;
		cout << name << endl;
	}
};

class derived_class: public BaseClass1, public BaseClass2
{
	string email;
public:
	void input()
	{
		cin >> email;
	}
	void display()
	{
		cout << email << endl;
	}
};

int main()
{
	derived_class d1;
	d1.input1();
	d1.display1();
	d1.input2();
	d1.display2();
	d1.input();
	d1.display();
	return 0;
}