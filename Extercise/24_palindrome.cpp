#include<bits/stdc++.h>
using namespace std;


class Node;
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




void insert_head(Node *&newhead, int val)
{
  Node *newNode = new Node(val);

  if(newhead == NULL)
  {
    newhead = newNode;
    return;
  }
newNode->next = newhead;
newhead = newNode;

}



bool ispalindrome(Node *head)
{
    Node *newNode = NULL;

    Node *tmp = head;

    while(tmp!= NULL)
    {
        insert_head(newhead, tmp->val);
        tmp = tmp->next;
    }

    while(head!= NULL)
    {
        if(head->val != newhead->next)
        {
            head = head->next;
            newhead = newhead->next;
            return false;
        }

        else
        {
            return true;
        }
    }
}




int main()
{
   Node *head = NULL;

   int val;
   cout << "Enter value: ";
   while(true)
   {
    cin >> val;
    if(val == -1)
    {
        break;
    }

    else 
    {
         insert_head(head, val);
    }
   }



 cout << ispalindrome(head);


    
    return 0;
}