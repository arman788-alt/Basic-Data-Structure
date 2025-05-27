#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai ";
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;

    queue<Node *> q;

    if (val == -1)
        root = NULL;

    else
    {
        root = new Node(val);
    }

    if (root)
        q.push(root);

    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l;
        cin >> r;
        Node *myLeft;  // Corrected variable name
        Node *myRight; // Corrected variable name
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }
    return root;
}

int main()
{
    Node *root = input_tree();
    level_order(root);

    return 0;
}