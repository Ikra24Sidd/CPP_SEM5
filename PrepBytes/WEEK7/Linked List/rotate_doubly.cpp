// Complete the rotateDoublyList function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
SinglyLinkedListNode* prev;
};
To create a new node use the below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *rotateDoublyList(SinglyLinkedListNode *head, int k)
{
//write your code here
  SinglyLinkedListNode *last = NULL;
  SinglyLinkedListNode *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  last = temp;
  for (int i = 0; i < k; i++)
  {
    last->next = head;
    head->prev = last;
    head = head->next;
    head->prev = NULL;
    last = last->next;
    last->next = NULL;
  }
  return head;
}
