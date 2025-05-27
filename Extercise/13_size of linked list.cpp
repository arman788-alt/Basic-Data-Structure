#include<bits/stdc++.h>
using namespace std;
      
//Question: Take a singly linked list as input and print the size of the linked list.
//sample input: 2 1 5 3 4 8 9 -1 
//output: 7

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


void insert_at_tail(Node *&head, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;//****
    }


    Node* tmp = head;

    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}




void print_linked_list(Node *head)
{
    Node *tmp = head;
    int count = 0;

    while(tmp!= NULL)
    {
        tmp = tmp->next;
        count++;

    }

    cout << endl << "Total size of linked list: " << count << endl;
}










int main()
{

Node *head = NULL;


while(true)
{
    int val;
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