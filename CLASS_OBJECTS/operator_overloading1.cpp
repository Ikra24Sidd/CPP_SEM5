#include <bits/stdc++.h>
using namespace std;

class opr_overload1
{
	int a;
public:
	opr_overload1()
	{
		a = 5;
	}

	void operator++()
	{
		a++;
	}

	void operator--()
	{
		a--;
	}

	void display()
	{
		cout << a << endl;
	}
};

int main()
{
	opr_overload1 o1;
	++o1;
	o1.display();
	--o1;
	o1.display();
	return 0;
}