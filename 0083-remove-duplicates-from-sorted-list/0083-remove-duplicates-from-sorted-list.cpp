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
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(current!=NULL && current->next!=NULL){
            if(current->val==current->next->val){
                ListNode* del= current->next;
                current->next=current->next->next;
                delete del;
            }
            else{
                current=current->next;
            }
        }
        return head;
    }
};