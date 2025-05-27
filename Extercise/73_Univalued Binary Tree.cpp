/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool sameNode(TreeNode* root) {
        queue<TreeNode*> q;
      
        if (root)
            q.push(root);

        while (!q.empty()) {
            TreeNode* f = q.front();
            q.pop();

            if (f->val != root->val)
                return false;
           
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
        return true;
        }


        bool isUnivalTree(TreeNode * root) 
        { 
            return sameNode(root);
             }
    };
    
    
    A binary tree is uni-valued if every node in the tree has the same value.

Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.

 

Example 1:


Input: root = [1,1,1,1,1,null,1]
Output: true
Example 2:


Input: root = [2,2,2,5,2]
Output: false
 

Constraints:

The number of nodes in the tree is in the range [1, 100].
0 <= Node.val < 100
















class Solution {
public:
    vector<int> v1;
    vector<int> v2;
    vector<int> vv1;
    vector<int> vv2;

    void pre_order1(TreeNode* root1) {

        if (root1 == NULL)
            return;
        v1.push_back(root1->val);
        pre_order1(root1->left);
        pre_order1(root1->right);
    }
    void pre_order2(TreeNode* root2) {
        if (root2 == NULL)
            return;
        v2.push_back(root2->val);
        pre_order2(root2->left);
        pre_order2(root2->right);
    }

    void post_order1(TreeNode* root1) {
        if (root1 == NULL)
            return;

        vv1.push_back(root1->val);
        post_order1(root1->left);
        post_order1(root1->right);
    }
    void post_order2(TreeNode* root2) {
        if (root2 == NULL)
            return;

        vv2.push_back(root2->val);
        post_order2(root2->left);
        post_order2(root2->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q)

    {
        pre_order1(p);
        pre_order2(q);
        post_order1(p);
        post_order2(q);

        if (v1.size() == v2.size()) {
            for (int i = 1; i < v1.size(); i++) {
                if (v1[i] != v2[i])
                    return false;
            }
        }


        if (vv1.size() == vv2.size()) {
            for (int i = 1; i < vv1.size(); i++) {
                if (vv1[i] != vv2[i])
                    return false;
            }
        }
        return true;
    }
};
