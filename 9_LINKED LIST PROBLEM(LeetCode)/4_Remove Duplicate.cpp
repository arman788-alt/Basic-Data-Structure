class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL) //surutei head NULL thakle oitay return niye jabo, niccher line r porbe na
            return head;
        ListNode *tmp = head;
        while (tmp->next != NULL)
        {
            if (tmp->val == tmp->next->val) 
            {
                ListNode *deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
            }
            if (tmp->next == NULL)// tmp next NULL hole loop break kore dibo
                break;
            else if (tmp->val != tmp->next->val)//multple dupicate copy thakle check krbo
            {
                tmp = tmp->next;
            }
        }
        return head;
    }
};

//Given the head of a sorted linked list,
//delete all duplicates such that each element appears only once. Return the linked list sorted as well.

//note: input type
// 1 1 2 3 4        output: 1 2 3 4
//1 1 1 1 2 2 3 4 5 output: 1 2 3 4 5
// 1 NULL           output: 1