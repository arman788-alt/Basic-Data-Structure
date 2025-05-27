#include <bits/stdc++.h>
using namespace std;

// bst te root er left child hobe root theke choto.
// r root er right child hobe root er theke boro.
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
Node *input_tree() //input level order e
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
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
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

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
bool search(Node *root, int x)
{
    if (root == NULL) 
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)                 
        return search(root->left, x);     // x er value root er value theke choto hole root er left side jabe...nahole right side jabe
        
                                         // eteee complexity kome jabe onk, complexity hobe tree er height er soman...O(h): height = log(N), karon node dhigon kore kore jay
                                        //vlo binary tree er complexity: log(N); r khrp binary tree er complexity: O(N)
    else
        return search(root->right, x);
}
int main()
{
    Node *root = input_tree();
    if (search(root, 100))
        cout << "Yes, Found" << endl;
    else
        cout << "No, Not Found" << endl;
    return 0;
}