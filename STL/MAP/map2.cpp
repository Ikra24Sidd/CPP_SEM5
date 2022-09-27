#include <bits/stdc++.h>
using namespace std;
int main()
{
	//BY DEFAULT MAP WILL PRINT THE ELEMENT IN ASCENDING ORDER ACCORDING TO THE KEYS
	map<char, int> m;
	//to insert an element in a map using insert function
	// m.insert({key,value})

	m['a'] = 8;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}

	/*if we try to update the value of an existing key using assignment, it will change the preious
	value */
	m['a'] = 4;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}

	/*BUT...if we try to update the value of an existing key using insert function, it will not
	 change the preious value
	 INSERT will only work if the key does not already exist, otherwise it won't update */
	m.insert({'a', 1});
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}

	m.insert({'c', 3});   //it will work as the key does not exist previously
	m.insert({'b', 2});

	// WE CAN ALSO USE i->first INSTEAD OF (*i).first TO PRINT THE ELEMENTS
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << i->first << " " << i->second << endl;
	}

	return 0;
}