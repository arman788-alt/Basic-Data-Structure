class Solution
{
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void reverse(ListNode *&head, ListNode *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    void print_list(ListNode *head)
    {
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
    }
    bool isPalindrome(ListNode *head)
    {
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            insert_tail(newHead, newTail, tmp->val);
            tmp = tmp->next;
        }
        reverse(newHead, newHead);
        print_list(newHead);
        tmp = head;//oprer loop e tmp last node e chole gese tai abr head theke suru hbe
        ListNode *tmp2 = newHead;
        while (tmp != NULL)
        {
            if (tmp->val != tmp2->val)
            {
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
};


//palindrome check korar jonno: main listthik rekhe, notun ekta node er list banabo jeta main list er value copy nibe ...pore copy list ke reverse korbo 
//pore reverse kora copy list er sathe main list er compare korbo same kinaaa.
//head ---main node
//newhead ---copy node main node er.
//main node r new node same memory na...just value copy kore