#include<iostream>
#include<stack>
using namespace std;



struct ListNode{
        int val;
        ListNode* next;
};

class Solution
{
public:
        ListNode *insert(ListNode *node, int data)
        {
                ListNode *temp = new ListNode();
                temp->val = data;
                if (!node)
                {
                        node = temp;
                        return node;
                }

                temp->next = node;
                node = temp;
                return node;
        }



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

int main(){
        ListNode* l1 =  NULL;
        ListNode* l2 = NULL;
        Solution s1;
        int array1[] = {2, 4, 3};
        int array2[] = {5,6,4};

        //int array1[] = {9,9,9,9,9,9,9};
        //int array2[] = {9,9,9,9};

        int length1 = sizeof(array1) / sizeof(array1[0]);
        int length2 = sizeof(array2) / sizeof(array2[0]);

        
        for(int i=0; i<length1; i++){
                l1 = s1.insert(l1, array1[i]);
        }

        for(int i=0; i<length2; i++){
                l2 = s1.insert(l2, array2[i]);
        }



        ListNode* l3 = s1.addTwoNumbers(l1, l2);

        while(l3){
                cout << l3->val << " ";
                l3 = l3->next;
        }

}
