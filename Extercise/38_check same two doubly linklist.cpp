#include <bits/stdc++.h>
using namespace std;
//Question: Take two doubly linked lists as input and check if they are the same or not.

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

void print(Node *head)
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

    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;
    cout << "Enter value: " << endl;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head1, tail1, val);
        }
    }

    cout << endl;

    cout << "Enter value: " << endl;
    while (true)

    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_tail(head2, tail2, val);
        }
    }

    Node *tmp1 = head1;
    Node *tmp2 = head2;

    bool flag = true;

    if (size(tmp1) == size(tmp2))
    {
        while (tmp1 != NULL && tmp2 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = false;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    else
    {
        flag = false;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}