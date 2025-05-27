#include<bits/stdc++.h>
using namespace std;

//insert at head position logic setup:

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



//insert at tail:
void insert_at_tail(Node* &head, int v)
{
  Node* newNode = new Node(v);

  if(head == NULL)
  {
    head = newNode;

    cout << endl << endl << "insert at head" << endl << endl;

    return;
  }
  
Node* tmp = head;
while(tmp->next!= NULL)
{
    tmp = tmp->next;
}

//ekane tmp ekhon last node e.

tmp->next = newNode;
  
}



//printing Linked List:
void print_linked_list(Node* head)
{   
    cout << endl;
    cout << "Your linked list: ";
    Node* tmp = head;

    while(tmp!= NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
   cout << endl << endl;
}


//insert at any position: 
void insert_at_position(Node* head, int pos, int v)
{
    Node* newNode = new Node(v);

    Node* tmp = head;

    for(int i = 1; i<=pos - 1; i++)
    {
      tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl << endl << "insert at position" << endl << endl;
}

//insert at head position.
void insert_at_head(Node* &head, int v)
{
    Node* newNode = new Node(v);

    newNode->next = head;
    head = newNode;

    cout << endl << "inserted at head" << endl << endl;
}




int main()
{
 
Node* head = NULL;


while(true)
{
    cout << "OPtion 1: insert at tail: " << endl;
    cout << "OPtion 2: print link list: " << endl;
    cout << "OPtion 3: insert at any position: " << endl;
    cout << "option 4: insert at head: " << endl;
    cout << "OPtion 4: Terminal: " << endl;

    int op;
    cin >> op;

    if(op == 1)
    {
        int v;
        cout <<"Enter a value: ";
        cin >> v;
        insert_at_tail(head,v);


    }

    else if(op == 2)
    {
     print_linked_list(head);
    }



   else if(op == 3)
   {
    int pos,v;
    cout << "Enter pos: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> v;

    if(pos == 0)
    {
        insert_at_head(head,v);
    }

  else{
    insert_at_position(head, pos, v);
      }

   }



   else if(op == 4)
   {

    int v;
    cout << "Enter value: ";
    cin >> v;

    insert_at_head(head, v);
   }


    else if(op == 5)
    {
        break;
    }
}





 
    return 0;
}