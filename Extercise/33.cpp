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

void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
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

    int t;
    cout << "testcase :";
    cin >> t;

    while (t--)
    {
        cout << endl;

        int x, v;
        cout << "Value x :";
        cin >> x;
        cout << "Value v :";
        cin >> v;

        if (x == 0)
        {
            insert_head(head, v);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
        }
    }

    // Print the linked list after all insertions
    print_linkedlist(head);

    return 0;
}
