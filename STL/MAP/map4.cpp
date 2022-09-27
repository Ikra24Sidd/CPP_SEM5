#include <bits/stdc++.h>
using namespace std;
int main()
{
	//SWAP FUNCTION WILL ONLY WORK IF THE DATATYPE OF KEY VALUE
	map<char, int> m1;
	map<char, int> m2;
	m1['a'] = 1;
	m1['b'] = 2;
	m1['c'] = 3;
	m2['i'] = 9;
	m2['k'] = 11;
	cout << "MAP 1" << endl;
	for (auto i = m1.begin(); i != m1.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}
	cout << "MAP 2" << endl;
	for (auto i = m2.begin(); i != m2.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}
	swap(m1, m2);
	cout << "MAP 1" << endl;
	for (auto i = m1.begin(); i != m1.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}
	cout << "MAP 2" << endl;
	for (auto i = m2.begin(); i != m2.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}
	return 0;
}