// Complete the lastElementFirst function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *lastElementFirst(SinglyLinkedListNode *head)
{
//write your code here
  SinglyLinkedListNode *temp = head;
  int lastNode;
  if (head->next == NULL)
  {
    return head;
  }
  else
  {
    while (temp->next->next != NULL)
    {
      temp = temp->next;
    }
    lastNode = temp->next->data;
    temp->next = NULL;
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(lastNode);
    newNode->next = head;
    head = newNode;
    return head;
  }

}

