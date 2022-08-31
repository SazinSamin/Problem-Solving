/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int listLength(ListNode* head) {
        int n = 0;
        while(head != NULL) {
                n++;
                head = head->next;
        }
        return n;
}


    ListNode* removeNthFromEnd(ListNode* head, int n) {
             
        int idx = listLength(head);
        if(idx == 1 && n == 1) {
                head = NULL;
                return head;
        }
        int delIdx = listLength(head) - n;
        if(delIdx == 0) {
                head = head->next;
                return head;
        }
             
        ListNode* temp = head;
        for(int i = 0; i < delIdx - 1; i++) {
                head = head->next;
        }

        if(head->next->next != NULL) {
                head->next = head->next->next;
        } else {
                head->next = NULL;
        }
        return temp;
    }
};
