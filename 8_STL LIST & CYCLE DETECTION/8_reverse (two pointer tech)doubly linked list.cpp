#include <bits/stdc++.h>
using namespace std;

//reverse using two pointer technique.
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}


//reverse using ----(two pointer technique).
void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)// i == j soman na hoya porjonto cholbe, and i er next j na howa porjonto cholbe
                                  // kono ektaa condtion false holei loop break korbe.,, 2ta true holei loop e duke swap korbe.
                                  //for even value: i==j holei break korbe.
                                  //for odd value: i->next = j holei break korbe.
                                 //loop break korar jonno minimum ekta false holei break krbe,
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}
int main()
{
    Node *head = new Node(10);
    // Node *a = new Node(20);
    Node *tail = head;

    // connection
    // head->next = a;
    // a->prev = head;
    // a->next = b;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;

    reverse(head, tail);
    print_normal(head);

    return 0;
}