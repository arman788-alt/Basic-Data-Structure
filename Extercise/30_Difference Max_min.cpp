#include <bits/stdc++.h>
using namespace std;

// You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

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

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
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

    // max
    Node *tmp = head;
    int mx = tmp->val;

    for (Node *i = tmp->next; i != NULL; i = i->next)
    {
        if (mx < i->val)
        {
            mx = i->val;
        }
    }

    // mim
    int mn = tmp->val;

    for (Node *i = tmp->next; i != NULL; i = i->next)
    {
        if (mn > i->val)
        {
            mn = i->val;
        }
    }

    // difference max and min
    int dif = mx - mn;

    cout << dif << endl;

    return 0;
}