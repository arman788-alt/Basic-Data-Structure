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

// print node er sujaa side theke sesh .
void print_normal(Node *head) // complexity: 0(n)
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

void insert_at_position(Node *head, int pos, int val) // complexity: 0(n)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     // 100->30 //Note: suru te tail er next e newNode na rekhee, newnode er next e tmp er next rekhechi, karon surutei tmp er next e newNode rakhle , tmp er next haray jabee tai.
    tmp->next = newNode;           // 20->100
    newNode->next->prev = newNode; // 100<-30
    newNode->prev = tmp;           // 20<-100
}

int size(Node *head) // complexity: 0(n)
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

void insert_head(Node *&head, Node *&tail, int val) // complexity: 0(1) karon kono direct head ei insert kortesi , loop use kora lgtese na.
{
    Node *newNode = new Node(val);
    if (head == NULL) // head NULL hole, newNode tai head and tail hoye jabe.
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val) // complexity: 0(1) karon ekhane tail ke track rakhtesi jar loop use kora lgtese nah.
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

int main()
{
    // Node *head = NULL;
    // Node *tail = NULL

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    Node *tail = c; // last node ke tail diye track rakhbo, jate reverse print kora jay.

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos, val;
    cin >> pos >> val;

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
        insert_at_position(head, pos, val);
    }
    print_normal(head);
    print_reverse(tail);

    return 0;
}