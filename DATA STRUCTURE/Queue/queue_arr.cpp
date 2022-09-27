//QUEUE: FIFO-First In First Out
#include <bits/stdc++.h>
using namespace std;

// #define SIZE 5;
int SIZE = 5;
int Queue[5];
int front = -1, rear = -1;

void Enqueue(int ele)
{
	if (front == -1)
	{
		front = 0;
		rear = 0;
		Queue[rear] = ele;
	}
	else if ((front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1)))
	{
		cout << "Queue Overflow" << endl;
	}
	else if (rear == (SIZE - 1) && front != 0)
	{
		rear = 0;
		Queue[rear] = ele;
	}
	else
	{
		rear++;
		Queue[rear] = ele;
	}
}

void Dequeue()
{
	if (front == -1)
	{
		cout << "Queue Underflow!" << endl;
		return;
	}
	int del_ele = Queue[front];
	if (front == rear)
	{
		front = rear = -1;
	}
	else if (front == (SIZE - 1))
	{
		front = 0;
	}
	else
	{
		front++;
	}
	cout << "Element deleted: " << del_ele << endl;
}

void display()
{
	if (front == -1)
	{
		cout << "Queue is empty!" << endl;
		return;
	}
	if (front <= rear)
	{
		for (int i = front; i <= rear; i++)
		{
			cout << Queue[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (int i = front; i <= (SIZE - 1); i++)
		{
			cout << Queue[i] << " ";
		}
		for (int j = 0; j <= rear; j++)
		{
			cout << Queue[j] << " ";
		}
		cout << endl;
	}
}

void reverse()
{
	if (front <= rear)
	{
		for (int i = rear; i >= front; i--)
		{
			cout << Queue[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (int j = rear; j >= 0; j--)
		{
			cout << Queue[j] << " ";
		}
		for (int i = (SIZE - 1); i >= front ; i--)
		{
			cout << Queue[i] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int c, ele;
	cout << "Enter your choice  1-Enqueue  2-Dequeue  3-Display  4-Reverse  5-Exit!" << endl;
	cin >> c;
	while (c != 5)
	{
		if (c == 1)
		{
			cout << "Enter the element: ";
			cin >> ele;
			Enqueue(ele);
		}
		else if (c == 2)
		{
			Dequeue();
		}
		else if (c == 3)
		{
			display();
		}
		else if (c == 4)
		{
			reverse();
		}
		else
			return 0;
		cin >> c;
	}
	return 0;
}