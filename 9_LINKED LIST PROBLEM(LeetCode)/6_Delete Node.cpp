class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        ListNode *deleteNode = node->next;
        node->next = node->next->next;
        delete deleteNode;
    }
};

//qstn: full linked list er head na diye just ekta node dibe jetaa dlt korte hbee.
//je node dlt korte dibe tar next e kono na kono value thakbe, NULL thakbe naa..
/*
There is a singly-linked list head and we want to delete a node node in it.

You are given the node to be deleted node. You will not be given access to the first node of head.

All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

The value of the given node should not exist in the linked list.
The number of nodes in the linked list should decrease by one.
All the values before node should be in the same order.
All the values after node should be in the same order.




*/

//logic: ekta specific node dewa hbe, take dlt korte hbe,list er head dewa hbe na ,, tarjonno oy node er next node er value tar nijer node er value te copy rakhbo, tokhon  ek hisbebe oy node er ager value dlt hoye jabe....but node er address same thakbe. 