
#include<bits/stdc++.h>
using namespace std;

//You will be given a singly linked list of integer values as input. 
//You need to remove duplicate values from the linked list and finally print the linked list.


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




void print_linkedlist(Node *head)
{
    Node *tmp = head;

    while(tmp!= NULL)
    {
        cout << tmp-> val << " ";
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
    break;

    else
    {
       insert_tail(head,tail,val);
    }
   }

//check duplicate.
Node *tmp = head;
while(tmp!= NULL)
{
    Node *duplicate = tmp;

    while(duplicate->next!= NULL)
    {
        if(tmp->val == duplicate->next->val)
        {
            Node *deleNode = duplicate->next;
            duplicate->next = deleNode->next;
            delete deleNode;
        }

        else 
        { 
          duplicate = duplicate->next;
        }
    }

    tmp = tmp->next;
}



    print_linkedlist(head);



    
    return 0;
}