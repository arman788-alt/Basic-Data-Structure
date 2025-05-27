#include <bits/stdc++.h>
using namespace std;
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


void print_recursion(Node *n)
{
    // base case
    if (n == NULL)
        return;
    cout << n->val << " ";// jodi agee kaj(cout) kori tarpor recurson fun ke call kor tahole kaj ta suru theke sesh print korbee.
    print_recursion(n->next);
}


void print_reverse(Node *n)  
{
    // base case
    if (n == NULL)
        return;

    print_reverse(n->next);  //but:: jodi recursive fun er bitor age recurson fun call kori, tarpor kaj(cout) kori tahole reverse print hbee.
    cout << n->val << " ";
}



int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
     
     
    print_recursion(head);
    cout << endl;
    print_reverse(head);
    return 0;
}