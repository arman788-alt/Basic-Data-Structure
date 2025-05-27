#include<bits/stdc++.h>
using namespace std;

//You will be given two singly linked list of integer values as input.
// You need to check if all the elements of both list are same which means both list are same. 
// If they are same print "YES" otherwise print "NO".

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


int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while(tmp!= NULL)
    {
        tmp = tmp->next;
        count++;
    }

    return count;
}







int main()
{
  Node *head1 = NULL;
  Node *tail1 = NULL;

  Node *head2 = NULL;
  Node *tail2 = NULL;
  


cout << "enter val1: ";
while(true)
{   int v;
    cin >> v;
    if(v == -1)
    {
        break;
    }

    else 
    {
        insert_tail(head1, tail1, v);
    }
}




cout << "enter val2: ";
while(true)

{   int v;
    cin >> v;
    if(v == -1)
    {
        break;
    }

    else
    {
      insert_tail(head2, tail2, v);
    }
}


Node *tmp1 = head1;
Node *tmp2 = head2;
bool flag = true;

 if(size(head1) == size(head2))
 {
    while(tmp1!=NULL && tmp2!= NULL)
{
    
        if(tmp1->val != tmp2->val)
        {
            flag = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    
}

 }

else 
{
    flag = false;
}






if(flag)
{
    cout<<"YES"<< endl;

}

else 
{
    cout << "NO" << endl;
}





    
    return 0;
}