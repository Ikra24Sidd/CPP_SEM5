/*FUNCTION OVERRIDING:  If we create 2 functions with same name, one in base class and other in
derived class, then it will not create any error(ambiguity error), as the function of derived class
will override the function of base class and the content of derived class will get displayed */

#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
	void display()
	{
		cout << "Display of base" << endl;
	}
};

class Derived: public Base
{
public:
	void display()
	{
		cout << "Display of Derived" << endl;
		Base::display();
	}
};

int main()
{
	Derived d1;
	// d1.display();       //this will call the display function of derived class
	d1.Base::display();   // this will call the display function of base class
	return 0;
}