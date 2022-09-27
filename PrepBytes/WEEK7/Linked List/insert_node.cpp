SinglyLinkedListNode *insertSortedNode(SinglyLinkedListNode *head, int value)
{
//write your code here
  SinglyLinkedListNode *newNode = new SinglyLinkedListNode(value);
  if (head->data > value)
  {
    newNode->next = head;
    head = newNode;
    return head;
  }
  else if (head->next == NULL)
  {
    head->next = newNode;
  }
  else
  {
    SinglyLinkedListNode *temp = head;
    while (temp->next->data < value && temp->next != NULL)
    {
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }
  return head;
}