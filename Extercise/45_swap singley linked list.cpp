#include<bits/stdc++.h>
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

void delete_list(Node *head, int k)
{
    Node *tmp1 = head;
    int count = sz(head) - k;
   
   for(int i = 1; i<=k-1; i++)
   {
    tmp1 = tmp1->next;
   }

   Node *tmp2 = head;
   for(int i = 1; i<=count; i++)
   {
    tmp2 = tmp2->next;
   }

   swap(tmp1->val , tmp2->val);
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
    int k;
    cout << "k :";
    cin >> k;

    delete_list(head, k);
    print(head);

    return 0;
}





class Solution {
public:
    int sz(ListNode* head) {
        ListNode* tmp = head;
        int cnt = 0;
        while (tmp != NULL) {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }

    void delete_list(ListNode* head, int k) {
        ListNode* tmp1 = head;
        int count = sz(head) - k;

        for (int i = 1; i <= k - 1; i++) {
            tmp1 = tmp1->next;
        }

        ListNode* tmp2 = head;
        for (int i = 1; i <= count; i++) {
            tmp2 = tmp2->next;
        }

        swap(tmp1->val, tmp2->val);
    }

    ListNode* swapNodes(ListNode* head, int k) {

        delete_list(head, k);
        return head;
    }
};




//You are given the head of a linked list, and an integer k.
//Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

 
