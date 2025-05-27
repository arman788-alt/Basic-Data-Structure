
#include<bits/stdc++.h>
using namespace std;

//Question: Take a singly linked list as input and sort it in descending order. Then print the list.



class Node
{
    public:
       int val;
       Node* next;


          Node(int val)
          {
            this->val = val;
            this->next = NULL;
          }
};


void insert_tail(Node *&head, Node *&tail, int val)
{  
    Node *newNode = new Node(val);

   if(head == NULL)
   {
    head = newNode;
    tail = newNode;
    return;
   }

   tail->next = newNode;
   tail = newNode;
}



void print_linked_list(Node *head)
{
    Node *tmp = head;

    while(tmp!= NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
}


int main()
{
   Node *head = NULL;
   Node *tail = NULL;


 int val;
 cout << "Enter value: ";
while(true)
{
    
    cin >> val;
    if(val == -1)
    {
        break;
    }

    else 
    {
        insert_tail(head, tail, val);
    }
}


//sorting descending order.
for(Node *i = head; i->next!=NULL; i = i->next)
{
    for(Node *j = i->next; j!=NULL; j =  j->next)
    {
        if(i->val < j->val) // descending order
        {
            swap(i->val, j->val);
        }
    }
}


print_linked_list(head);


    return 0;
}