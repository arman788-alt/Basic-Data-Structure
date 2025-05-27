#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;

  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }

  tail->next = newNode;
  tail = newNode;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int val;
  cout << "Enter value: ";
  while (true)
  {

    cin >> val;

    if (val == -1)
    {
      break;
    }
    else
    {
      insert_at_tail(head, tail, val);
    }
  }

  Node *tmp = head;

  if (tmp == NULL)
  {
    cout << "List is empty." << endl;
    return 0;
  }

  int max = tmp->val;

  for (Node *i = tmp->next; i != NULL; i = i->next)
  {
    if (max < i->val)
    {
      max = i->val;
    }
  }

  cout << "Max value: " << max << endl;

  return 0;
}
