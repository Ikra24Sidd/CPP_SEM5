#include <bits/stdc++.h>
using namespace std;

//STACK used LIFO(LastO In First Out) approach to insert and delete elements from stack
int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	stack<int> s2;
	s2.push(1);
	s2.push(2);
	cout << s.top() << endl;
	cout << s.size() << endl;
	// while (!s.empty())
	// {
	// 	cout << s.top() << " ";
	// 	s.pop();
	// }
	// cout << endl;
	// while (!s2.empty())
	// {
	// 	cout << s2.top() << " ";
	// 	s2.pop();
	// }
	s.swap(s2);
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
	while (!s2.empty())
	{
		cout << s2.top() << " ";
		s2.pop();
	}
	cout << endl;
	return 0;
}