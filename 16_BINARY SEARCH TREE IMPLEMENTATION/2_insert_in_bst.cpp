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
void insert(Node *&root, int x)//root er reference nibo karon root  nije NULL hole, new node insert korbo root er moddhe then, update kora lgbe
{
    if (root == NULL)//base case
    {
        root = new Node(x);
        return;
    }
    if (x < root->val) //NOTE: x ke x er jaygay jete daoo, choto hole left e, boro hole right e.
    {
        if (root->left == NULL) // left e insert korar age check korbo left khali kinaa,khali hole left node create kore x insert krbo, r left khali nah hole, tar left e jabo else block e
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else // x er value root theke boro hole root er right e ashbe.
    {
        if (root->right == NULL) // and check korbo right side NULL kina, NULL hole node insert korbo, r nahole else block e insert function call krbo root er right er dike
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}
int main()
{
    Node *root = input_tree();

    insert(root, 13);
    insert(root, 32);
    insert(root, 27);
    insert(root, 22);
    level_order(root);
    return 0;
}

//Note : Complexity 
//1ta node insert korle complexity O(Height)
//N ta node insert korle complexity O(N*Height)
//Height er maan worst case hole 0(N); base case hole log(N)