#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<char, int> m;
	m['a'] = 1;
	m['c'] = 3;
	m['b'] = 2;
	m['e'] = 5;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << (*i).first << "->" << (*i).second << " ";
	}
	cout << endl;

	// AT() FUNCTION
	// this will print the value corresponding to the key passed in the ()
	cout << m.at('b') << endl;

	//IF THE KEY IS NOT PRESENT IN THE MAP, THEN IT WILL GIVE A RUNTIME ERROR: OUT OF RANGE

	// cout << m.at('d') << endl;


	//WE CAN ALSO PRINT THE VALUE OF A KEY USING m[key],
	//BUT IF THE KEY IS NOT PRESENT IN THE MAP, IT WILL NOT GIVE AN ERROR, INSTEAD IT WILL
	// ADD THAT KEY TO THE MAP WITH VALUE AS 0
	cout << m['b'] << endl;
	cout << m['d'] << endl;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << (*i).first << "->" << (*i).second << " ";
	}
	cout << endl;

	//
	auto i = m.find('f');
	cout << i->first << "->" << i->second << endl;
	return 0;
}