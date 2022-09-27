#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Map stores the element in the form of key value pair
	map<int, int> m;    // here the key and value both are of integer type
	m[1] = 10;
	m[2] = 20;
	m[4] = 30;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}
	map<char, int> m1;    // here the key is of type char and value is of type int
	m1['a'] = 1;
	m1['b'] = 2;
	m1['c'] = 3;
	for (auto i = m1.begin(); i != m1.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}

	//NOTE: VALUES IN A MAP CAN BE DUPLICATE, BUT KEYS SHOULD ALWAYS BE UNIQUE
	//if we create a duplicate key with some other value, it will not give an error, but it will
	// overwrite the value of the key already present with the new value

	map<int, int> m3;
	m3[1] = 10;
	m3[2] = 20;
	m3[3] = 5;
	m3[3] = 7;   //7 will over write 5 as they have same key
	m3[4] = 30;
	for (auto i = m3.begin(); i != m3.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}
	return 0;
}