#include<bits/stdc++.h>
using namespace std;

//Question: Take a singly linked list as input and print the reverse of the linked list.

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



void insert_linked_list(Node* &head, Node* &tail, int val)
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





void reverse_print(Node *n)
{
if(n == NULL)
   return;

reverse_print(n->next);

 cout << n->val << " ";

}




int main()
{
 
Node *head = NULL;
Node *tail = NULL;


int val;
while(true)
{
cin >> val;
if(val == -1)
{
    break;
}

else 
{
 insert_linked_list(head, tail, val);
}

}
     reverse_print(head);

    return 0;
}