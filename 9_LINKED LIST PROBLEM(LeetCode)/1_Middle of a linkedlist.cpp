class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode *middleNode(ListNode *head)
    {
        int sz = size(head);
        ListNode *tmp = head;
        for (int i = 1; i <= sz / 2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};

// qstn: Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.

// note:total node er size ODD hole middle er value hbe n/2 means: 1 2 3 ; 3/2 = 1; ekhane size index 0 theke hisab korle middle 1 no index hbe.
// even hole,  (n/2)-1 & n/2 hobe 2ta middle node : 1 2 3 4 hole, (4/2)-1 = 1, first middile node 2, 4/2 = 2, 2nd middle node 3.
// index 0 theke start hbe.
