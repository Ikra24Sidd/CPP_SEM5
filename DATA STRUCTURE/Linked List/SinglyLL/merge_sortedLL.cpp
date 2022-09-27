#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;
};

node *head1 = NULL;
node *head2 = NULL;
node *head = NULL;

node *insertEnd(node *head, int newData)
{
	node *new_node = new node();
	new_node->data = newData;
	new_node->next = NULL;
	if (head == NULL)
	{
		head = new_node;
		return head;
	}
	node *curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	return head;
}

void display(node *head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

node* mergeLL()
{
	node *temp1 = head1;
	node *temp2 = head2;
	node *head = new node();
	node *temp = head;
	while (temp1 != NULL && temp2 != NULL)
	{
		if (temp1->data < temp2->data)
		{
			temp->next = temp1;
			temp1 = temp1->next;
			temp = temp->next;
			temp->next = NULL;
		}
		else if (temp1->data > temp2->data)
		{
			temp->next = temp2;
			temp2 = temp2->next;
			temp = temp->next;
			temp->next = NULL;
		}
	}
	while (temp1 != NULL)
	{
		temp->next = temp1;
		temp1 = temp1->next;
		temp = temp->next;
		temp->next = NULL;
	}

	while (temp2 != NULL)
	{
		temp->next = temp2;
		temp2 = temp2->next;
		temp = temp->next;
		temp->next = NULL;
	}
	return head;
}

int main()
{
	int n, m;
	cin >> n >> m;
	int ele;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		head1 = insertEnd(head1, ele);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> ele;
		head2 = insertEnd(head2, ele);
	}
	display(head1);
	display(head2);
	head = mergeLL();
	display(head->next);
	return 0;
}