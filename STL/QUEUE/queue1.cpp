#include <bits/stdc++.h>
using namespace std;

//queue: it is a derived container, i.e. it uses sequential container like vector
int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	cout << q.size() << endl;
	cout << q.front() << endl;
	cout << q.back() << endl;
	cout << q.empty() << endl;   //this will return 1 if q is empty, otherwise 0
	// while (!q.empty())
	// {
	// 	cout << q.front() << " ";
	// 	q.pop();
	// }
	queue<int> temp = q;  //this will copy the elements of q in temp
	while (!temp.empty())
	{
		cout << temp.front() << " ";
		temp.pop();
	}
	cout << endl << q.empty() << endl;
	cout << temp.empty() << endl;
	return 0;
}