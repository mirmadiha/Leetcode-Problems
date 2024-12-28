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
    ListNode* reverseList(ListNode* head) {
        ListNode* previous=NULL;
        ListNode* current=head;
        ListNode* forward=NULL;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(current!=NULL){
            forward=current->next;                                    
            current->next=previous;
            previous=current;
            current=forward;
        }
        return previous;
    }
};