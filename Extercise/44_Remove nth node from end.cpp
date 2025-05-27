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

void insert(Node *&head, Node *&tail, int val)
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

int sz(Node *head)
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

void delete_list(Node *head, int n)
{
    Node *tmp = head;
    int pos = sz(head) - n;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    tmp->next = tmp->next->next;
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
            break;

        else
        {
            insert(head, tail, val);
        }
    }
    print(head);
    if (head->next == NULL)
    {
        head = NULL;
    }
    int N;
    cout << "N :";
    cin >> N;

    delete_list(head, N);
    print(head);

    return 0;
}


















class Solution
{
public:
    void delete_list(ListNode *&head, int n)
    {
        ListNode *tmp = head;
        int pos = sz(head) - n;
        if (pos == 0)
        {
            head = head->next;
            return;
        }
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }

        tmp->next = tmp->next->next;
    }

    int sz(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head->next == NULL)
        {
            head = NULL;
            return head;
        }

        delete_list(head, n);
        return head;
    }
};