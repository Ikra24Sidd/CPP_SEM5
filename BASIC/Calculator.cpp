#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a, b;
	char opr;
	cout << "\n Enter the operation to perform: ";
	cin >> opr;
	cout << "Enter the two values: ";
	cin >> a >> b;
	switch (opr)
	{
	case '+': cout << "\n" << a << " + " << b << " = " << a + b;
		break;
	case '-': cout << "\n" << a << " - " << b << " = " << a - b;
		break;
	case '*': cout << "\n" << a << " * " << b << " = " << a * b;
		break;
	case '/': cout << "\n" << a << " / " << b << " = " << a / b;
		break;
	default: cout << "Invalid operator!";
	}
	return 0;
}