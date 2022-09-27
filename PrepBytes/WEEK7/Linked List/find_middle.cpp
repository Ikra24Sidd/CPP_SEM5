#include <bits/stdc++.h>
using namespace std;
int main()
{
	return 0;
}

int countEle(SinglyLinkedListNode *head)
{
	SinglyLinkedListNode *temp = head;
	int count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
void printMidElement(SinglyLinkedListNode *head)
{
//write your code here
	int count = countEle(head);
	int mid = count / 2;
	SinglyLinkedListNode *temp = head;
	for (int i = 0; i < mid; i++)
	{
		temp = temp->next;
	}
	cout << temp->data << endl;
}

// void printMidElement(SinglyLinkedListNode *head)
// {
// //write your code here

// 	SinglyLinkedListNode *temp = head;
// 	SinglyLinkedListNode *fast = head, *slow = head;
// 	while (fast != NULL)
// 	{
// 		fast = fast->next->next;
// 		slow = slow->next;
// 	}
// 	cout << slow->data << endl;
// }
