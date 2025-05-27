#include<bits/stdc++.h>
using namespace std;


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




//1_Insert at tail::
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);


    if(head == NULL)//age theke jodi kono node na thake.
    {
        head = newNode;
        cout << endl << endl << "Inserted at head" << endl << endl;
        return;
    }

    Node *tmp = head;
    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }

    //tmp ekhon last node e
    tmp->next = newNode;
}




//2_Printing Linked list::
void print_linked_list(Node *head)
{   
    cout << endl;
    cout <<"Your linked list: ";
    Node *tmp = head;

    while(tmp!= NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }

    cout << endl << endl;
}



//3_insert at any position::
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = head;
    for(int i = 1; i<=pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)//Error handle
        {
            cout << endl << endl << "Invalid index" << endl << endl;
        }
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl << endl << "Inserted at position" << pos << endl << endl;
}




//4_insert at head::
 void insert_at_head(Node* &head, int v)
{
  Node *newNode = new Node(v);
 
 newNode->next = head;
 head = newNode;
 cout << endl << endl <<"Inserted at head" << endl;


}




//5_delete from position::
 void delete_from_position(Node *head, int pos)
 {
  Node *tmp = head;

  for(int i = 1; i<=pos - 1; i++)
  {
    tmp = tmp->next;

    if(tmp == NULL)//Error handle
    {
        cout << endl << endl <<"Invalid Index" << endl << endl;
        return;
    }
  }

   if(tmp == NULL)//Error handle
    {
        cout << endl << endl <<"Invalid Index" << endl << endl;
        return;
    }

  //tmp ekhon je pos dlt korbo tar ager position e.
  Node *deleteNode = tmp->next;

  tmp->next = tmp->next->next;

  delete deleteNode;
  cout << endl << endl <<"Deleted position" << pos << endl << endl;

 }





//6_delete head::
 void delete_head(Node *&head)//reference
 {
    if(head == NULL)
    {
        cout << endl <<"Head is not available" << endl << endl;
    }


    Node *deleteNode = head;
    head = head->next;

    delete deleteNode;
    cout << endl << endl <<"Deleted head" << endl << endl;
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
    cout<<"option 5: Delete from position: "<<  endl;
    cout <<"option 6: delete from head: " << endl;
    cout << "OPtion 7: Terminal: " << endl;


    int op;
    cin >> op;

    if(op == 1)
    {
        int v;
        cout <<"Enter value: ";
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
    cout<<"Enter position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> v;

    if(pos == 0)
    {
        insert_at_head(head, v);
    }
    else
    {
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
    int pos;
    cout <<"Enter position for delete: ";
    cin >> pos;

    if(pos == 0)
    {
        delete_head(head);
    }
    
    else
    {
 
    delete_from_position(head,pos);
    }
}



else if(op == 6)
{
    delete_head(head);
}


else if(op == 7)
{
    break;
}







}




    
    return 0;
}