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

int count_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = count_node(root->left);
    int r = count_node(root->right);

    return l + r + 1;
}

int maxHight(Node *root)
{
    if (root == NULL)
        return 0;

    int l = maxHight(root->left);
    int r = maxHight(root->right);

    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    int totalNode = count_node(root);
    int max = maxHight(root);

    if (totalNode == pow(2, max) - 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}

Problem Statement

You will be given a binary tree as input in level order. You need to tell if the binary tree is perfect or not. A binary tree is called perfect if all leaf nodes are at the maximum depth of the tree, and the tree is completely filled with no gaps.

Here is an example of perfect binary tree:

image

Also there is formula available to tell if a binary tree is perfect or not. The formula is :

Total number of nodes = 2^maxdepth -1

Note: Here depth is counted from . In the above image maximum depth is , so total number of nodes are . So there should be  nodes to call it a perfect binary tree.

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output YES  if the tree is perfect, NO otherwise.

Sample Input 0
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 0
YES

Sample Input 1
10 20 30 40 -1 60 -1 -1 -1 -1 -1
Sample Output 1
NO

Sample Input 2
10 20 -1 -1 -1
Sample Output 2
NO

Sample Input 3
10 20 30 40 50 60 70 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 3
YES