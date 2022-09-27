#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;

void insert_end(int data)
{
	Node *new_node = new Node();
	new_node->data = data;
	new_node->next = NULL;
	if (head == NULL)
	{
		head = new_node;
		return;
	}
	Node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
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

void sort_LL()
{
	int temp;
	Node *min = NULL;
	Node *temp1 = head;
	Node *temp2 = head;
	while (temp1->next != NULL)
	{
		min = temp1;
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if (temp2->data < min->data)
			{
				min = temp2;
			}
			temp2 = temp2->next;
		}
		if (temp1 != min)
		{
			temp = temp1->data;
			temp1->data = min->data;
			min->data = temp;
		}
		temp1 = temp1->next;
	}
}

int main()
{
	insert_end(3);
	insert_end(2);
	insert_end(5);
	insert_end(1);
	display();
	sort_LL();
	display();
	return 0;
}