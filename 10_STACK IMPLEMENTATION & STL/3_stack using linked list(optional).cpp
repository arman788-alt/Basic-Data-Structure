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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL) // tail er prev NULL hole buje nibo liste 1tay node chilo, tai tail NULL e ashle Head ke o NULL kore dite hbe, karon oi ektay node ke tail diye dlt korle     Head garbage point kore thakbe.
        {
            head = NULL; // Jokhon list e Node 1ta.
        }
        else
        {
            tail->next = NULL;  // List e Node 1tar beshi hole ei block kaj korbe.
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->val; // doubly linkedlist te tail er track thake, tail er value pabo.
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{   // Note: pop and top korar age condition diye check kore nibo list empty kinaa, empty na hole , pop and top kora jabe.
    myStack st;
    // st.pop();  
    cout << st.top() << endl;

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     st.push(x);
    // }
    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    return 0;
}