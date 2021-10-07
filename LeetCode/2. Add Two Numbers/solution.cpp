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
    
    ListNode* insertAtFront(ListNode* head, int data){
        ListNode* temp = new ListNode();
        temp->val = data;

        if(!head){
                head =  temp;
                return head;
        }

        ListNode* temp2 = head;
        while(temp2->next != NULL){
                temp2 = temp2->next;
        }

        temp2->next = temp;
        
        return head;

}

        ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
                int n1 = 0, n2 = 0, sum = 0, carry = 0, total = 0;
                int counter = 0;
                ListNode* l3 =  NULL;

                while(l1 || l2){
                        counter++;
                        if(l1){
                                n1 = l1->val;
                                l1 = l1->next;
                        }
                        if(l2){
                                n2 = l2->val;
                                l2 = l2->next;
                        }

                        sum = n1 + n2 + carry;
                        total =  sum % 10;
                        l3 = insertAtFront(l3, total);
                        //cout << total;
                        carry = sum / 10;
                        n1 = 0;
                        n2 = 0;

                }
                if(carry > 0){
                        //cout << carry;
                        l3 = insertAtFront(l3, carry);
                }
                return l3;
        }        
    
};
