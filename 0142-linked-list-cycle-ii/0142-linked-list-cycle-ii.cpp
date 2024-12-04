/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
    ListNode* detectLoop(ListNode* head){
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && slow!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            if(slow==fast){
                return slow;
            }
        }
        return NULL;

    }

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(detectLoop(head)!=NULL){
            if(head==NULL){
                return head;
            }
            ListNode* intersection=detectLoop(head);
            if(intersection==NULL){
                return NULL;
            }
            ListNode* slow=head;
            while(intersection!=slow){
                slow=slow->next;
                intersection=intersection->next;
            }
            return slow;
        }
        return NULL;
    }
};