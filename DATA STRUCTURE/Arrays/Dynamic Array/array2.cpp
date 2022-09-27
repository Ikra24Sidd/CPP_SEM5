#include <bits/stdc++.h>
using namespace std;
int main()
{
	// string name = "Ikra";
	char name[5] = {'I', 'K', 'R', 'A'};
	char *ptr;
	ptr = name;
	cout << ptr << endl;   //this will print the whole character array: IKRA
	cout << *ptr << endl;  //this will print the first character: I
	cout << *(ptr + 1) << endl;  //O/P: K

	// for (int i = 0; i < 5; i++)
	// {
	// 	if (name[i] == NULL)
	// 		cout << "NULL";
	// 	else
	// 		cout << name[i] << " ";
	// }
	return 0;
}