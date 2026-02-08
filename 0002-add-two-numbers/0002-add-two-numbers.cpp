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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* temp1=l1;
       ListNode* temp2=l2;
       ListNode* l3 = new ListNode(0);
       ListNode* curr=l3;
       int carry =0; 
        while(temp1!=nullptr && temp2!=nullptr){
            int sum = ((temp1->val + temp2->val + carry));
            carry = (temp1->val + temp2->val + carry)/10;

            curr->next = new ListNode(sum%10);
            curr=curr->next;

            temp1=temp1->next;
            temp2=temp2->next;
        } 
        while(temp1!=nullptr){
            int sum = ((temp1->val + carry));
            carry = (temp1->val + carry)/10;

            curr->next = new ListNode(sum%10);
            curr=curr->next;

            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            int sum = ((temp2->val) + carry);
            carry = (temp2->val + carry)/10;

            curr->next = new ListNode(sum%10);
            curr=curr->next;

            temp2=temp2->next;
        }
        if (carry){
           curr->next = new ListNode(carry);
            curr=curr->next; 
        }

        return l3->next;

    }
};