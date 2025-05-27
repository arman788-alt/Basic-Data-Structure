/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int>v;

void In_order(TreeNode *root)
{
    if(root == NULL)
    return;


    In_order(root->left);
    v.push_back(root->data);
    In_order(root->right);
}



vector<int> getInOrderTraversal(TreeNode *root)
{
 v.clear();

 In_order(root);

 return v;
}
Problem statement
You have been given a Binary Tree of 'n' nodes, where the nodes have integer values. Your task is to return the In-Order traversal of the given binary tree.

Sample Input 1 :
1 2 3 -1 -1 -1  6 -1 -1
Sample Output 1 :
2 1 3 6
Explanation of Sample Output 1 :
The given binary tree is shown below: