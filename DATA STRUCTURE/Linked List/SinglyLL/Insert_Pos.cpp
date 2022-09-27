// TO INSERT AN ELEMENT AT A GIVEN POSITION

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;
int countNode = 0;

void insert_end(int newData)
{
	Node *new_node = new Node();
	new_node->data = newData;
	new_node->next = NULL;
	if (head == NULL)
	{
		head = new_node;
		countNode++;
		return;
	}
	Node *curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	countNode++;
}

void insert_pos(int newData, int pos)
{
	Node *new_node = new Node();
	new_node->data = newData;
	new_node->next = NULL;
	if (pos < 1)
	{
		cout << "Invalid position" << endl;
		return;
	}
	if (pos > countNode + 1)
	{
		cout << "Invalid position" << endl;
		return;
	}
	if (pos == 1) {
		new_node->next = head;
		head = new_node;
		countNode++;
		return;
	}
	if (pos == countNode + 1)
	{
		insert_end(newData);
		return;
	}
	Node *curr = head;
	for (int i = 1; i < pos - 1; i++)
	{
		curr = curr->next;
	}
	new_node->next = curr->next;
	curr->next = new_node;
	countNode++;
}

void delete_begin()
{
	if (head == NULL)
	{
		"List is empty!!";
		return;
	}
	head = head->next;
}

void delete_end()
{
	if (head == NULL)
	{
		"List is empty!!";
		return;
	}
	Node *curr = head;
	while (curr->next->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = NULL;
}

void delete_pos(int pos)
{
	if (head == NULL)
	{
		"List is empty!!";
		return;
	}
	if (pos < 1)
	{
		cout << "Invalid position" << endl;
		return;
	}
	if (pos > countNode + 1)
	{
		cout << "Invalid position" << endl;
		return;
	}
	if (pos == 1)
	{
		head = head->next;
		return;
	}
	Node *curr = head;
	for (int i = 1; i < pos - 1; i++)
	{
		curr = curr->next;
	}
	curr->next = curr->next->next;

}

void searchNode(int item)
{
	bool flag = false;
	struct Node *curr = head;
	while (curr != NULL)
	{
		if (curr->data == item)
		{
			cout << "Element found" << endl;
			flag = true;
			break;
		}
		curr = curr->next;
	}
	if (!flag)
	{
		cout << "Element not found" << endl;
	}
}

void display()
{
	Node *temp = head;
	if (temp == NULL)
	{
		cout << "List is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
}

int main()
{
	insert_end(5);
	insert_end(7);
	insert_end(9);
	display();
	insert_pos(6, 4);
	display();
	// // delete_begin();
	// // delete_end();
	// delete_pos(2);
	// display();
	// searchNode(9);
	return 0;
}