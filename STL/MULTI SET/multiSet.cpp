#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s1 = {10, 20, 5};
	for (auto i = s1.begin(); i != s1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	multiset<int> s2(s1.begin(), s1.end());
	for (auto i = s2.begin(); i != s2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	s2.insert(10);
	s2.insert(10);
	s2.insert(10);
	for (auto i = s2.begin(); i != s2.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}