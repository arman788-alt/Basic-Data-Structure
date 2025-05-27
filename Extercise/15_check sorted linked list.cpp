#include<bits/stdc++.h>
using namespace std;


//Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.


class Node
{  public:
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



void print_linked_list(Node *head)
{
    Node *tmp = head;

    int sorted = true;

    while(tmp!= NULL && tmp->next!= NULL)//logic
    {
       
        if(tmp->val > tmp->next->val)
        {
           sorted = false;
           break;
        }
        tmp = tmp->next;

    }   


    if(sorted)
    {
        cout <<"Yes, Sorted" << endl;
    }
     else 
     {
        cout <<"NO, Unsorted" << endl;
     }
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


 print_linked_list(head);


    
    return 0;
}