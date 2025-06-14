class Solution {
public:
    
    ListNode* swapNodes(ListNode* head, int k) {
     ListNode *first = head;

     for(int i = 1; i<=k-1; i++)
     {
        first = first->next;
     }

     ListNode *slow = head;
     ListNode *fast = first;

     while(fast!= NULL && fast->next!=NULL)// for even num && odd num.
     {
     
        slow = slow->next;
        fast = fast->next;
     
     }
     swap(first->val, first->val);
     
     return head;
    
    }
};

//slow fast pointer technique:


//You are given the head of a linked list, and an integer k.
//Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

 







