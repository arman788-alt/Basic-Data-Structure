#include <bits/stdc++.h>
using namespace std;
//Question: Take a doubly linked list as input and reverse it. After that print the linked list.
// solve this prblm bye two pointer technique.
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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        swap(i->val, j->val);

        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}

void print_linkedlist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    cout << "Enter Value: " << endl;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
    }

    reverse(head, tail);
    print_linkedlist(head);
    return 0;
}