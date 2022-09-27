#include <bits/stdc++.h>
using namespace std;

//Abstract Class- A class that contains atleast 1 pure virtual function
//Pure Virtual Function- A virtual function that does not have any definition

class Base    //this is an abstract class as it has 1 pure virtual function
{
public:
	virtual void display() = 0; //Pure Virtual Function
	void display1()
	{
		cout << "Base Class" << endl;
	}
};

class Derived: public Base
{
public:
	void display()
	{
		cout << "Derived Class" << endl;
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