// Complete the reverseKnodes function below.
/*
For your reference:
SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use the below constructor
SinglyLinkedListNode(int node_data)
*/

// SinglyLinkedListNode *insertNode(SinglyLinkedListNode *head, int data)
// {
//   SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
//   if (head == NULL)
//   {
//     head = newNode;
//     return head;
//   }
//   SinglyLinkedListNode *temp = head;
//   while (temp->next != NULL)
//   {
//     temp = temp->next;
//   }
//   temp->next = newNode;
//   return head;
// }

SinglyLinkedListNode *reverseKnodes(SinglyLinkedListNode *head, int k)
{
//write your code here
  vector<int> ll;
  int n = 0;
  while (head != NULL)
  {
    ll.push_back(head->data);
    head = head->next;
    n++;
  }
  int s = 0, temp;
  do
  {
    for (int i = s, j = s + k - 1; i < j; i++, j--)
    {
      temp = ll[i];
      ll[i] = ll[j];
      ll[j] = temp;
    }
    s = s + k;
  }
  while (s < n - k + 1);
  for (int i = 0; i < n; i++)
  {
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(ll[i]);
    // insertNode(head,ll[i]);
    // SinglyLinkedListNode *newNode= new SinglyLinkedListNode(data);
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

