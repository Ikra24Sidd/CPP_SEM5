#include <bits/stdc++.h>
using namespace std;

// #define size 30;
int st[30];
int Top = -1;

void Push(int data)
{
	if (Top == 30)
	{
		cout << "Stack Overflow!!" << endl;
		return;
	}
	st[++Top] = data;
}

void Pop()
{
	if (Top == -1)
	{
		cout << "Stack Underflow!!" << endl;
		return;
	}
	cout << "Element deleted: " << st[Top] << endl;
	Top--;
}

void display()
{
	int temp = Top;
	cout << "Stack:" << endl;
	while (temp != -1)
	{
		cout << st[temp] << endl;
		temp--;
	}
}

void Peek()
{
	if (Top == -1)
	{
		cout << "Stack is empty!!" << endl;
		return;
	}
	cout << "Element at top: " << st[Top] << endl;
}


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