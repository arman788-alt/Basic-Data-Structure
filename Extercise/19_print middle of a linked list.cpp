
#include<bits/stdc++.h>
using namespace std;

//Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.


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





void print_middle(Node *head)
{
    Node *tmp = head;
    int count = 0;

    while(tmp!= NULL)
    {
        count++;
        tmp = tmp->next;
    }



    tmp = head;
    if(count % 2 == 0)
    {
        for(int i = 1; i<=(count/2)-1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " "<< tmp->next ->val;
    }


    else 
    {
        for(int i = 1; i<=count/2; i++)
        {
            tmp = tmp->next;
        }
       cout << tmp->val << endl;
    }

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
        insert_tail(head, tail, val);
    }
}


print_middle(head);
    
    return 0;
}