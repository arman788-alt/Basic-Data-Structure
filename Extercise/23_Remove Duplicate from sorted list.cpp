#include<bits/stdc++.h>
using namespace std;



//input: 1 1 1 2 2 3 4 5 -1
//output: 1 2 3 4 5

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




//logic
Node *tmp = head;
while(tmp!= NULL && tmp->next!= NULL)
   {
       
    if(tmp->val == tmp->next->val)//compare dublicate value.
    {
        Node *deleNode = tmp->next;
        tmp->next = deleNode->next;

        delete deleNode;
    }

    else 
    {
        tmp = tmp->next;
    }
   }



    print_linkedlist(head);



    
    return 0;
}