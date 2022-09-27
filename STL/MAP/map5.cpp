#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<float, int> m;
	m[2.5] = 1;
	for (auto i = m.begin(); i != m.end(); i++)
	{
		cout << i->first << " " << i->second;
	}
	return 0;
}