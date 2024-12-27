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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current=head;
        ListNode* previous=NULL;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(current!=NULL && current->next!=NULL){
            previous=current;
            current=current->next;
            if(current->val == previous->val){
                previous->next=current->next;
                delete current;
                current=previous;
            }
        }
        return head;
    }
};