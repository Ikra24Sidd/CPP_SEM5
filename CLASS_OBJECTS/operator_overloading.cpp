#include <bits/stdc++.h>
using namespace std;

class Opr_overload
{
	int real;
	int imag;
public:
	Opr_overload()
	{
		real = 0;
		imag = 0;
	}

	Opr_overload(int r1, int i1)
	{
		real = r1;
		imag = i1;
	}

	Opr_overload operator+(Opr_overload obj1)
	{
		Opr_overload obj2;
		obj2.real = real + obj1.real;
		obj2.imag = imag + obj1.imag;
		return obj2;
	}

	void display()
	{
		cout << real << " " << imag << endl;
	}
};

int main()
{
	Opr_overload o1(2, 3);
	Opr_overload o2(2, 2);
	Opr_overload o3(2, 2);
	Opr_overload o4;
	// o4 = o1 + o2 + o3
	o4 = o1 + o2;    // in this + is adding as a function which will add the two objects like
	//04= 01.add(o2);
	o4.display();
	return 0;
}


//operators that cant be overloaded: (.),(pointer),(::),(sizeof),(?:)