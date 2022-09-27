#include <bits/stdc++.h>
using namespace std;
int main()
{
	// set will only have unique elements, if we try to insert duplicate elements, it won't insert
	//by default elements in set are inserted in ascending order

	set<int> s;   // it will print in ascending order
	// set<int, greater<int>> s;    //syntax for descending order
	s.insert(10);
	s.insert(5);
	s.insert(20);
	s.insert(5);  // No error, but will not get inserted
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	s.erase(20);  //it will remove the given element from the set
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	s.insert(1);
	s.insert(2);
	s.insert(4);
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	auto x = s.lower_bound(3);
	cout << *x << endl;
	auto y = s.upper_bound(10);
	cout << *y << endl;

	return 0;
}


