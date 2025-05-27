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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;

    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l;
        cin >> r;

        Node *myleft;
        Node *myright;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);

        if (r == -1)
            myright = NULL;

        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }

    return root;
}
 
int sum = 0;
void Sum_Without_Leaf(Node *root)
{ 
    if (root == NULL)
        return;

    queue<Node*> q;

    q.push(root);
  
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        if (p->left != NULL || p->right != NULL)
        {
            sum = sum + p->val;
        }

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }


}

int main()
{

    Node *root = input_tree();
    Sum_Without_Leaf(root);
    cout << sum;

    return 0;
}

Problem Statement

You will be given a binary tree as input in level order. You need to output the sum of all node's values in that tree except the leaf nodes.

For example:

image

The output for the above tree will be: 60

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the total sum of that tree except the leaf nodes.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60


    