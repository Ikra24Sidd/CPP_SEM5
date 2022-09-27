// Complete the arrangeVowCon function below.

/*
For your reference:

SinglyLinkedListNode {
char data;
SinglyLinkedListNode* next;
};
To create a new node below constructor is provided
SinglyLinkedListNode(char node_data)
*/

SinglyLinkedListNode *arrangeVowCon(SinglyLinkedListNode *head)
{
//write your code here
  vector<char> vow, con;
  while (head != NULL)
  {
    if (head->data == 'a' || head->data == 'e' || head->data == 'i' || head->data == 'o' || head->data == 'u')
    {
      vow.push_back(head->data);
    }
    else
    {
      con.push_back(head->data);
    }
    head = head->next;
  }
  for (int i = 0; i < vow.size(); i++)
  {
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(vow[i]);
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
  for (int i = 0; i < con.size(); i++)
  {
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(con[i]);
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