// Complete the palindromeLlist function below.
/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
bool palindromeLlist(SinglyLinkedListNode *head)
{
//write your code here
  vector<int> v;
  while (head != NULL)
  {
    v.push_back(head->data);
    head = head->next;
  }
  for (int i = 0, j = v.size() - 1; i < j; i++, j--)
  {
    if (v[i] != v[j])
    {
      return false;
    }
  }
  return true;
}
