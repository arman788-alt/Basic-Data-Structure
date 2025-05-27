#include<bits/stdc++.h>
using namespace std;

//Question: Take two singly linked lists as input and check if their sizes are same or not.

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



int size(Node *head)
{
    int count = 0;
    Node *tmp = head;

    while(tmp!= NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;

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
 
Node *head1 = NULL;
Node *tail1 = NULL;

Node *head2 = NULL;
Node *tail2 = NULL;


//linked list 1
int val1;
cout << "Value of linked list 1: ";
while(true)
{
cin >> val1;
if(val1 == -1)
{
    break;
}

else 
{
 insert_linked_list(head1, tail1, val1);
}


}


cout << endl;


//linked list 2
int val2;
cout << "Value of Linked list 2: ";
while(true)
{
   
    cin >> val2;

    if(val2 == -1)
    {
        break;
    }
    else
    {
        insert_linked_list(head2, tail2, val2);

    }
}




//check if their sizes are same or not.
if(size(head1) == size(head2))
{
    cout << "Yes" << endl;
}

else 
{
    cout << "NO" << endl;
}

    
    return 0;
}