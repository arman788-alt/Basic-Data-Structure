class Solution
{
public:
  ListNode *removeElements(ListNode *head, int val)
  {
    if (head == NULL)
      return head;

    while (head != NULL && head->val == val)
    {
      head = head->next;
    }

    ListNode *cur = head;

    while (cur != NULL && cur->next != NULL)
    {
      if (cur->next->val == val)
      {
        cur->next = cur->next->next;
      }
      else
      {
        cur = cur->next;
      }
    }

    return head;
  }
};

// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

// Input: head = [1,2,6,3,4,5,6], val = 6
Output : [ 1, 2, 3, 4, 5 ] Example 2 :

    Input : head = [],
            val = 1 Output : [] Example 3 :

    Input : head = [ 7, 7, 7, 7 ],
            val = 7 Output : []