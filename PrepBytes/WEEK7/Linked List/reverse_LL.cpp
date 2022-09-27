// Complete the reverseLinkedList function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *reverseLinkedList(SinglyLinkedListNode *head)
{
//write your code here
  stack<int> s;
  while (head != NULL)
  {
    s.push(head->data);
    head = head->next;
  }
  while (!s.empty())
  {
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(s.top());
    s.pop();
    if (head == NULL)
    {
      head = newNode;
    }
    else
    {
      SinglyLinkedListNode *temp = head;
      while (temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }
  return head;
}
