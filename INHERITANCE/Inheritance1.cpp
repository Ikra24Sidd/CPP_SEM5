//SINGLE INHERITANCE

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

class derived_class: public BaseClass
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
		cout << email;
	}
};

int main()
{
	derived_class d1;
	d1.input();
	d1.display();
	return 0;
}