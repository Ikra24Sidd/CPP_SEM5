#include <bits/stdc++.h>
using namespace std;

//try throw catch
int main()
{
	float x = -1.5;
	try
	{
		if (x < 0)
		{
			throw x;
			cout << "Welcome to try block" << endl;  //this statement will never execute
		}
	}

	// catch (float)
	// {
	// 	cout << "Welcome to float catch" << endl;
	// }

	// catch (int)
	// {
	// 	cout << "Welcome to int catch" << endl;
	// }

	catch (...)
	{
		cout << "Welcome to catch block" << endl;
	}
	return 0;
}