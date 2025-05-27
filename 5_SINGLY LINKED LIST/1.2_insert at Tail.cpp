#include<bits/stdc++.h>
using namespace std;


class Node
{
 public:
 
  int val;
  Node* next;


  Node(int val) //constructor
  {
     this->val = val;
     this->next = NULL;
  }


};


void insert_at_tail(Node *&head, int v)//****Note: direct head and tail ke change korte chailee,,  tader refence dortee hoyy..
{
    Node *newNode = new Node(v);//Constructor

    if(head ==NULL)
    {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }
    //ekhon tmp last node e
    tmp->next = newNode;

}


void print_linked_list(Node *head)
{
    Node *tmp = head;

    while(tmp!= NULL)
    {
        cout << tmp->val <<" ";

        tmp = tmp->next;
    }

    cout << endl;
}



int main()
{
 
Node* head = NULL;


while(true)
{
    cout << "Option 1: insert at Tail :" << endl;
    cout << "option 2: printing Linked List :" << endl;
    cout << "option 3: Terminate :" << endl;


int op;
cin >> op;

if(op == 1)
{
    cout << "Enter a value: ";
    int v;
    cin >> v;

    insert_at_tail(head, v);

}

else if(op == 2)
{

   print_linked_list(head);
}

else if(op == 3)
{
    break;
}

}


 
    return 0;
}