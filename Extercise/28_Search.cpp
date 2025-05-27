#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *Next;

    Node(int val)
    {
        this->val = val;
        this->Next = NULL;
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

    tail->Next = newNode;
    tail = newNode;
}

int main()
{

    int t;
    cout << "testcase: ";
    cin >> t;

    while (t--)
    {

        Node *head = NULL;
        Node *tail = NULL;

        int val;
        cout << "Val:";
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

        int x;
        cout << "enter x :";
        cin >> x;

        Node *tmp = head;
        int pos = 0;
        bool flag = false;
        while (tmp != NULL)
        {

            if (tmp->val == x)
            {
                flag = true;
                break;
            }
            pos++;
            tmp = tmp->Next;
        }

        if (flag)
        {
            cout << pos << endl;
        }

        else
        {
            cout << "-1" << endl;
        }

      
    }
    return 0;
}