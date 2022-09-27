#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *head = NULL;

int main()
{
	int c, ele;
	cout << "Enter your choice  1-Push  2-Pop  3-Display  4-Peek  5-Exit!" << endl;
	cin >> c;
	while (c != 5)
	{
		if (c == 1)
		{
			cout << "Enter the element: ";
			cin >> ele;
			Push(ele);
		}
		else if (c == 2)
		{
			Pop();
		}
		else if (c == 3)
		{
			display();
		}
		else if (c == 4)
		{
			Peek();
		}
		else
			return 0;
		cin >> c;
	}
	return 0;
}