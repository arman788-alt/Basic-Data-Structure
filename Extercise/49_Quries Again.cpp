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

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print_normal(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse_print(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

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
    newNode->prev = tail;
    tail = tail->next;
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
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int q;
   
    cin >> q;
    while (q--)
    {

        int x, v;
     
        cin >> x;
  
        cin >> v;

        if (x < 0 || x > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }

        else if (x == 0)
        {
            insert_head(head, tail, v);
        }
        else if (x == size(head))
        {
            insert_tail(head, tail, v);
        }
        else
        {
            insert_any_pos(head, v, x);
        }

        print_normal(head);
        reverse_print(tail);
    }

    return 0;
}



//You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

//You need to insert the value V at index X. Assume that index starts from 0.
//After that for each query you need to print the linked list from left to right and right to left.
//If the index is invalid, then print "Invalid".






