#include<bits/stdc++.h>
using namespace std;

//Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. 
//You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.

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




void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);


    if(head == NULL)
    {
        head = newNode;
        return;
    }


    Node *tmp = head;

    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}









 void insert_at_index(Node *head,int val,int index)
 {
     Node *newNode = new Node(val);

     Node *tmp = head;

    for(int i = 1; i<=index - 1; i++)
    {
        tmp = tmp->next;

        if(tmp == NULL)
        {
           cout << endl << "Invalid index" << endl << endl; 
        }
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
 }





void print_linked_list(Node *head)
{

    cout << endl;
    cout <<"Your linked list: ";
    Node *tmp = head;
    
    while(tmp!= NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;

    }
    cout << endl << endl;
}






int main()
{
 Node *head = NULL;


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
      insert_at_tail(head, val);
    }

  
}





int q;
cout <<"test case: ";
cin >> q;

 while(q--)
 {

  
    cout << "option 1: insert at any index: " << endl;
    cout << "Option 2: print linked list: " << endl;


    



int op;
cout <<"op: ";
cin >> op;

    if(op == 1)
    {
    int val,index;
    cout << "Enter index:";
    cin >> index;

    cout << "Enter value: ";
    cin >> val;


    insert_at_index(head, val, index);
    }


    else if(op==2)
    {
        print_linked_list(head);
    }
 }





    
    return 0;
}

