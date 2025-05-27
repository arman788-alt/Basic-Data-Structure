
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

Node* input_Tree()
{
    int val;
    cin >> val;
    Node *root;

    if(val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *pr = q.front();
        q.pop();

        int l, r;
        cin >> l;
        cin >> r;

        if (l != -1)
        {
            pr->left = new Node(l);
            q.push(pr->left);
        }

        if (r != -1)
        {
            pr->right = new Node(r);
            q.push(pr->right);
        }
    }
    return root;
}

 

void Left_print(Node* root)
{
    if (root == NULL)
        return;
 
    if (root->left)
     {
       Left_print(root->left);
        
        cout << root->left->val << " ";
    }
    else if (root->right)
     {
       Left_print(root->right);
        cout << root->right->val << " ";
    }

}
 

void right_print(Node* root)
{
    if(root == NULL)
        return;
 
    if(root->right)
     {
        cout << root->right->val << " ";
        right_print(root->right);
      
    }
    else if(root->left)
     {
        cout << root->left->val << " ";
        right_print(root->left);
       
    }
 
}
 


void print_site(Node* root)
{
    if(root == NULL)
        return;
 
   
    if(root->left)
    {
        Left_print(root->left);
        cout<<root->left->val<< " ";
    }
 
     cout << root->val << " ";
   
    if(root->right)
    {
       cout<<root->right->val<< " ";
        right_print(root->right);
      
    }
 
   
  
}


int main()
{
    Node *root = input_Tree();

    print_site(root);

    return 0;
}
