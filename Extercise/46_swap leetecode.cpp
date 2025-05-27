class Solution {
public:
    int sz(ListNode* head) {
        ListNode* tmp = head;
        int cnt = 0;
        while (tmp != NULL) {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }

    void delete_list(ListNode* head, int k) {
        ListNode* tmp1 = head;
        int count = sz(head) - k;

        for (int i = 1; i <= k - 1; i++) {
            tmp1 = tmp1->next;
        }

        ListNode* tmp2 = head;
        for (int i = 1; i <= count; i++) {
            tmp2 = tmp2->next;
        }

        swap(tmp1->val, tmp2->val);
    }

    ListNode* swapNodes(ListNode* head, int k) {

        delete_list(head, k);
        return head;
    }
};




//You are given the head of a linked list, and an integer k.
//Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

 







