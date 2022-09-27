// Complete the removeDuplicates function below.

/*
* For your reference:
*
* SinglyLinkedListNode {
*     int data;
*     SinglyLinkedListNode* next;
* };

To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*
*/
SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *head)
{
//write your code here
	SinglyLinkedListNode *temp = head;
	while (temp->next != NULL)
	{
		if (temp->data == temp->next->data)
		{
			temp->next = temp->next->next;
		}
		else
			temp = temp->next;
	}
	return head;
}

