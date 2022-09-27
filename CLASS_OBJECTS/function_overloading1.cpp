//FUNCTION OVERLOADING- Compile time

#include <bits/stdc++.h>
using namespace std;
class OverLoad
{
public:
	void add(int a, int b)
	{
		cout << a + b << endl;
	}

	void add(int a, float b)
	{
		cout << a + b << endl;
	}

	void add(float a, int b)
	{
		cout << a + b << endl;
	}

	void add(float a, float b)
	{
		cout << a + b << endl;
	}

	void add(int a, int b, int c)
	{
		cout << a + b + c << endl;
	}
};

int main()
{
	OverLoad f1;
	f1.add(2, 4);
	f1.add(3, 4.5f);
	f1.add(5.2f, 2);
	f1.add(1.5f, 4.7f);
	f1.add(2, 4, 6);
	return 0;
}