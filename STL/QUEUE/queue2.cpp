#include <bits/stdc++.h>
using namespace std;

void print(queue<int> q1)
{
	while (!q1.empty())
	{
		cout << q1.front() << " ";
		q1.pop();
	}
	cout << endl;
}

int main()
{
	//We can swap two queues of different size using swap function
	queue <int> q1;
	queue <int> q2;
	q1.push(10);
	q1.push(20);
	q1.push(30);
	q1.push(40);
	q2.push(1);
	q2.push(2);
	print(q1);
	// while (!q1.empty())
	// {
	// 	cout << q1.front() << " ";
	// 	q1.pop();
	// }
	// cout << endl;
	// while (!q2.empty())
	// {
	// 	cout << q2.front() << " ";
	// 	q2.pop();
	// }
	// cout << endl;

	q1.swap(q2);  // to swap q1 with q2
	while (!q1.empty())
	{
		cout << q1.front() << " ";
		q1.pop();
	}
	cout << endl;
	while (!q2.empty())
	{
		cout << q2.front() << " ";
		q2.pop();
	}
	cout << endl;


	return 0;
}