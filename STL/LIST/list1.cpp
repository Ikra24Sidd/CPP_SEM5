#include <bits/stdc++.h>
//#include<list>
using namespace std;


// in list, elements are not stored at contiguos memory location, so we can only use iterator to
// insert the element at front or back only

void display(list<int> l1)
{
	for (auto i = l1.begin(); i != l1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}
int main()
{
	list<int> l1{10, 20, 30};
	// list<int>:: iterator i;
	display(l1);
	cout << endl;
	l1.push_back(40);
	l1.push_front(5);
	l1.pop_front();    //remove an element from the front of the list
	display(l1);

	l1.pop_back();    //remove an element from the back of the list
	list<int>::iterator x = l1.end();
	l1.insert(x , 5);
	display(l1);

	cout << l1.front() << endl;
	cout << l1.back() << endl;

	l1.sort();
	display(l1);

	l1.reverse();
	display(l1);

	l1.clear();   //this will remove all the elements from list

	if (l1.empty())
	{
		cout << "LIST IS EMPTY" << endl;
	}
	else
	{
		cout << "LIST IS NOT EMPTY" << endl;
	}
	return 0;
}