#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    // Write your code here.
    queue<pair<TreeNode<int> *, int>> q; //queue er datatype hobe pair type er,,, pair hocche 2ta value er group...1st value diyechi node, 2nd value int type data.

    // q.push(make_pair(root,1));
    q.push({root, 1});
    while (!q.empty())
    {

        //1.queue theke ber kore anaa
        pair<TreeNode<int> *, int> pr = q.front();
        TreeNode<int> *node = pr.first; // pair er first data hocche node
        int level = pr.second; // pair er 2nd data hocche tree er level no
        q.pop();

        //2.jabotio kaj
        if (node->val == searchedValue)
        {
            return level;
        }

        //3.children gulo ke queue te push kora
        if (node->left)
        {
            q.push({node->left, level + 1}); //parent je level er... children er level tar theke 1 beshi.
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }


    //Note::: pair class er moto...pair ekti group etee 2ta value rakha jay....1st value access kore   .fast diye.. 2nd value    .second diye
    //node er level track rakha jay pair er maddhome...
}
Problem statement
Ninja has been given a binary tree having N nodes and an integer M, he needs to find the level of node M. He finds it difficult to solve and asks for your help.

Note:

Consider root to be at level 1. It is guaranteed that all the nodes in the binary tree have distinct values.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 5
0 <= N <= 3000
0 <= node data <= 10^9  

Time Limit: 1 sec
Sample Input 1:
2
1 2 3 -1 -1 -1  6 -1 -1
6
1 2 -1 -1 -1
1
Sample Output 1:
3
1
Explanation of Sample Input 1:
 For the first test case, the given binary tree is shown below.
 Here, we see that node 6 is at a distance of 2 units from the root(node 1). Hence, our level will be 3.

For the second test case, the given binary tree is shown below.

As we are looking for node 1 which is itself the root node, hence our level is 1.
Sample Input 2:
1
1 3 8 5 -1 7 -1 -1 -1 -1 -1
10
Sample Output 2:
0
Explanation of Sample Input 2:
For the first test case, the given binary tree is shown below.

As node 10 is not present in the tree, so we return 0.
