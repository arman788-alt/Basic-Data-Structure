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

vector<int> v;
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;

    queue<Node *> q;
    if (val == -1)
        root = NULL;

    else
        root = new Node(val);

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

void leaf_node(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        v.push_back(root->val);

    leaf_node(root->left);
    leaf_node(root->right);
}

int main()
{
    Node *root = input_tree();

    leaf_node(root);

    sort(v.begin(), v.end(), greater<int>());

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}

You will be given a binary tree as input in level order. You need to print the values of leaf nodes in descending order.

For example:

image

The output for the above tree will be: 60 50 40

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the values of leaf nodes in descending order.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60 50 40
Submissions: 648
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More
 
