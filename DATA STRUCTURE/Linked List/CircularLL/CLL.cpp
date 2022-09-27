#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;

void insert_begin(int newData)
{
	Node *new_node = new Node();
	new_node->data = newData;
	new_node->next = head;
	head = new_node;
}

void display()
{
	Node *temp = head;
	do
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	while (temp != head);
	cout << "NULL" << endl;
}

int main()
{
	insert_begin(5);
	insert_begin(7);
	insert_begin(2);
	insert_begin(3);
	insert_begin(8);
	display();
	insert_begin(9);
	display();
	return 0;
}