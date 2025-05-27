#include <bits/stdc++.h>
using namespace std;
//Question: Take a doubly linked list as input and check if it forms any palindrome or not.


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

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    cout << "Enter value: ";

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

//check palindrome using two pointer technique in doubly list e.
    Node *i = head;
    Node *j = tail;
    bool flag = true;
    while (i != j && i->next != j)
    {
        if (i->val != j->val)
        {
            flag = false;
            break;
        }
        else
        {
            i = i->next;
            j = j->prev;
        }
    }



        // note: loop e i-next = j soman holei, tokhon i er next j reverse na check korei loop break kore, tai i er next j soman kinaa baire check krbo.
        if (i->val != j->val)
        {
            flag = false;
        }

        if (flag)
        {
            cout << "Yes reverse same" << endl;
        }
        else
        {
            cout << "reverse not same" << endl;
        }

        return 0;
    }