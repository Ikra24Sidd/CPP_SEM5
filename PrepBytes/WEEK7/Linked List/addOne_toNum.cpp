// Complete the addOneToList function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *addOneToList(SinglyLinkedListNode *head)
{
  // write your code here
  int sum = 0;
  while (head != NULL)
  {
    sum = (sum * 10) + head->data;
    head = head->next;
  }
  sum += 1;
  while (sum != 0)
  {
    int rem = sum % 10;
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(rem);
    if (head == NULL)
    {
      head = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
    sum /= 10;
  }
  return head;
}

