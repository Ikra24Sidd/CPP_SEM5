#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
//Virtual function: ignore the virtual function if the same function is present in derived class
	virtual void display()
	{
		cout << "Base" << endl;
	}
};

class Derived: public Base
{
public:
	void display()
	{
		cout << "Derived" << endl;
	}
};

int main()
{
	Derived d1;
	Base *b1;
	b1 = &d1;
	b1->display();
	return 0;
}


/* virtaul function says: if any function of base class has made virtual, then it will not execute
that virtual function, if there is any function with same name in derived class*/