//HIERARCHICAL INHERITANCE

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

class derived_class1_1: public derived_class1
{
	int group;
public:
	void input1()
	{
		cin >> group;
		cin >> Name;
	}
	void display1()
	{
		cout << group << endl;
		cout << Name << endl;
	}
};
int main()
{
	derived_class1_1 d1_1;
	d1_1.input();
	d1_1.display();
	d1_1.input1();
	d1_1.display1();
	return 0;
}