// INSERTING ELEMENT AT THE END AND DISPLAYING THE ELEMENT

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;

void insert_end(int newData)
{
	Node *new_node = new Node();
	new_node->data = newData;
	new_node->next = NULL;
	if (head == NULL)
	{
		head = new_node;
		return;
	}
	Node *curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}

void display()
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL";
}

int main()
{
	insert_end(5);
	insert_end(7);
	insert_end(9);
	display();
	return 0;
}