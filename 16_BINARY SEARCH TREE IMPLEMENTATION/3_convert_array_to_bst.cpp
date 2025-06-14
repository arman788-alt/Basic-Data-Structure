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
Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convert(a, n, l, mid - 1); //mid-1 hocche r
    Node *rootRight = convert(a, n, mid + 1, r); //mid+1 hocche l
    root->left = leftRoot;
    root->right = rootRight;
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
int main()
{
    int n;
    cin >> n;
    int a[n]; //note: array ke obossoi sort kore nite hobe bst te convert korar jonno
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Node *root = convert(a, n, 0, n - 1); //a array er adress, n array er size, 0 hocche l , n-1 hocche r
    level_order(root);
    return 0;
}