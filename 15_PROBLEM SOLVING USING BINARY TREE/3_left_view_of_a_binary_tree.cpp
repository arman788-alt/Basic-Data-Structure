#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    bool frq[3005] = {false};  //FREQUENCY ARRAY 
    queue<pair<TreeNode<int> *, int>> q;
    if (root)
        q.push({root, 1});


    vector<int> v;
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> pr = q.front();
        q.pop();
        TreeNode<int> *node = pr.first;
        int level = pr.second;

        if (frq[level] == false)
        {
            v.push_back(node->data);
            frq[level] = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    return v;
}




















Problem statement
You have been given a binary tree of integers. You are supposed to find the left view of the binary tree. The left view of a binary tree is the set of all nodes that are visible when the binary tree is viewed from the left side.

Example:The left view of the above binary tree is  {5, 7, 14, 25}.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 100
0 <= N <= 3000
1 <= data <= 10^5 and data!=-1

Where ‘T’ is the number of test cases, and ‘N’ is the total number of nodes in the binary tree, and “data” is the value of the binary tree node

Time Limit: 1 sec
Sample Input 1:
2
3 4 -1 -1 -1 
2 8 7 -1 5 -1 -1 1 -1 -1 -1
Sample Output 1:
3 4
2 8 5 1
Explanation of Sample Input 1:
For the first test case, node 3 and node 4 are visible when the binary tree is viewed from the left.

For the second test case, nodes 2, 8, 5, 1 are visible when the binary tree is viewed from the left.
Sample Input 2:
2
1 3 5 12 -1 8 -1 -1 -1 -1 -1 
9 6 3 -1 -1 4 8 -1 -1 -1 -1 
Sample Output 2:
1 3 12
9 6 4
Explanation of Sample Input 2:
For the first test case, nodes 1, 3, 12 are visible when the binary tree is viewed from the left.

For the second test case, nodes 9, 6, 4 are visible when the binary tree is viewed from the left.
C++ (g++ 5.4)
12345678910111213141516171819202122232425
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;

