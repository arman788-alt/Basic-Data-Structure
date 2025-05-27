#include <bits/stdc++.h>
using namespace std;

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

// Print node er ultaa side theke.
void print_reverse(Node *tail) // complexity: 0(n)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

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
    tail = newNode;
}
void insert_any_pos(Node *head, int val, int pos)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cout << "Enter testcase: ";
    cin >> t;
    while (t--)
    {

        int pos, val;
        cout << "pos: ";
        cin >> pos;
        cout << "value: ";
        cin >> val;

        if (pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            insert_head(head, tail, val);
        }
        else if (pos == size(head))
        {
            insert_tail(head, tail, val);
        }
        else
        {
            insert_any_pos(head, val, pos);
        }
        cout << "Forward: ";
        print_normal(head);
        cout << "Reverse: ";
        print_reverse(tail);
    }

    return 0;
}

// Question: You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries.
//  For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left.
//  If the index is invalid then print “Invalid