#include <bits/stdc++.h>
using namespace std;
int main()
{
	// multimap<int, char> m;
	// m.insert({1, 'a'});
	// m.insert({2, 'b'});
	// m.insert(make_pair(2, 'e'));
	// m.insert(make_pair(2, 'c'));
	// // m[1] = 'b';
	// // m[2] = 'b';
	// for (auto i = m.begin(); i != m.end(); i++)
	// {
	// 	cout << i->first << "->" << i->second << endl;
	// }

	multimap<int, int> m;
	int a, b;
	for (int i = 0; i < 7; i++)
	{
		cin >> a >> b;
		m.insert(make_pair(a, b));
	}
	// m[1] = 'b';
	// m[2] = 'b';
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << i->first << "->" << i->second << endl;
	}
	return 0;
}