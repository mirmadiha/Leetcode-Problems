/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:

    ListNode *detectLoop(ListNode* head){
       if(head==NULL || head->next==NULL){
            return NULL;
        }

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                return slow;
            }
        }
        return NULL; 
    }

    ListNode *detectCycle(ListNode *head) {
        if(detectLoop(head)==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode *intersection=detectLoop(head);
        while(slow!=intersection){
            slow=slow->next;
            intersection=intersection->next;
        }
        return slow;
    }
};