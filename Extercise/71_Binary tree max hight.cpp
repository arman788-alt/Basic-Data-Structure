/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/


int max_hight(TreeNode<int> *root)
{
    if(root == NULL)
    return 0;

    int l = max_hight(root->left);
    int r = max_hight(root->right);

    return max(l, r)+1;
}

int heightOfBinaryTree(TreeNode<int> *root)
{
     return max_hight(root);
}
Problem statement
The height of a tree is equal to the number of nodes on the longest path from the root to a leaf.



You are given an arbitrary binary tree consisting of 'n' nodes where each node is associated with a certain value.



Find out the height of the tree.

