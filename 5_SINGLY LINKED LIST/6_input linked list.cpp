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

    int cnt = 0;

    while(tmp!= NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
        cnt++;
    }

cout << endl<< "total size of linked list: " << cnt << endl;
    cout << endl << endl;
}





int main()
{
 
Node* head = NULL;

while(true)
{

int val;
cin >> val;


if(val == -1)
break;

insert_at_tail(head, val);

}

 print_linked_list(head);
    
    return 0;
}