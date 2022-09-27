#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *prev;
	Node* next;
};

Node *head = NULL;

void insert_begin(int new_data)
{
	Node* newNode = new Node;
	newNode->data = new_data;
	newNode->prev = NULL;
	newNode->next = head;
	if (head != NULL)
		head->prev = newNode;
	head = newNode;
}

void insert_end(int new_data)
{
	Node *newNode = new Node;
	newNode->data = new_data;
	newNode->next = NULL;
	Node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
}

void insert_pos(int new_data, int pos)
{
	Node *newNode = new Node;
	newNode->data = new_data;
	Node *temp = head;
	for (int i = 1; i < pos - 1; i++)
	{
		temp = temp->next;
	}
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;
}

void delete_begin()
{
	head = head->next;
	head->prev = NULL;
}

void delete_end()
{
	if (head == NULL)
	{
		"List is empty!!";
		return;
	}
	Node *temp = head;
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = NULL;
}

void delete_pos(int pos)
{
	if (head == NULL)
	{
		"List is empty!!";
		return;
	}
	Node *curr = head;
	for (int i = 1; i < pos - 1; i++)
	{
		curr = curr->next;
	}
	curr->next->next->prev = curr;
	curr->next = curr->next->next;
}

void display()
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int main()
{
	insert_begin(4);
	insert_begin(5);
	insert_end(7);
	insert_end(9);
	// insert_pos(1, );
	display();
	// delete_begin();
	// display();
	delete_pos(3);
	display();
	return 0;
}