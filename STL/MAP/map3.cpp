#include <bits/stdc++.h>
using namespace std;
int main()
{
	//BY DEFAULT MAP WILL PRINT THE ELEMENT IN ASCENDING ORDER ACCORDING TO THE KEYS

	// TO PRINT THE ELLEMENT IN DESCENDING ORDER OF KEYS, WE WILL USE THE SYNTAX BELOW
	map<char, int, greater<int>> m; //this will print the element is desc order of the keys
	m['c'] = 1;
	m['e'] = 5;
	m['i'] = 9;
	m['a'] = 1;
	m['b'] = 2;

	//elements will be printed in descending order
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}

	//ERASE: it will erase the value corresponding to the given key
	m.erase('e');

	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}

	//EMPTY WILL RETURN 1 IF THE MAP IS EMPTY, OTHERWISE 0
	cout << m.empty() << endl;
	//Clear will remove all the elements from the map and map will be empty
	m.clear();
	cout << m.empty() << endl;


	return 0;
}