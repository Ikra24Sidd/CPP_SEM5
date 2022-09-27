//program to find the roots of a quadratic equation
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c, disc, r1, r2, real, imag;
	cin >> a >> b >> c;
	disc = (b * b) - (4 * a * c);
	if (disc > 0)
	{
		r1 = ((-b) + (sqrt(disc))) / (2 * a);
		r2 = ((-b) - (sqrt(disc))) / (2 * a);
		cout << "Root1 = " << r1 << endl;
		cout << "Root2 = " << r2 << endl;
	}
	else if (disc == 0)
	{
		r1 = (-b) / (2 * a);
		r2 = (-b) / (2 * a);
		cout << "Root1 = " << r1 << endl;
		cout << "Root2 = " << r2 << endl;
	}
	else if (disc < 0)
	{
		real = (-b) / (2 * a);
		imag = (sqrt(disc)) / (2 * a);

		cout << "Root1 = " << real << " +i " << imag << endl;
		cout << "Root2 = " << real << " -i " << imag << endl;
	}
	return 0;
}