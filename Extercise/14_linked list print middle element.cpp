#include <bits/stdc++.h>
using namespace std;

// Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.
// input: 2 4 6 8 10 -1 output: 6
// input: 1 2 3 4 5 6 -1 output: 3 4

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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    int cnt = 0;

    while (tmp != NULL)
    {

        tmp = tmp->next;
        cnt++;
    }

    tmp = head;
    if (cnt % 2 == 0)
    {
        for (int i = 1; i <= (cnt / 2) - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }

    else
    {
        for (int i = 1; i <= cnt / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
}

int main()
{

    Node *head = NULL;

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
            insert_at_tail(head, val);
        }
    }

    print_linked_list(head);

    return 0;
}