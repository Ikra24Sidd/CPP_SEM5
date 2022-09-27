#include <bits/stdc++.h>
using namespace std;

template <class t>

class x
{
private:
	t a;
	t b;
public:
	x(t m, t n)
	{
		a = m;
		b = n;
	}

	t add()
	{
		return a + b;
	}
};

int main()
{
	x<int> addInt(4, 5);
	x<float> addFloat(4.2, 5.1);
	x<double> addDouble(4.4, 5.6);
	cout << addInt.add() << endl;
	cout << addFloat.add() << endl;
	cout << addDouble.add() << endl;
	return 0;
}