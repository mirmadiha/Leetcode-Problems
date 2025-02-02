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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current=head;
        ListNode* dummy=new ListNode (-1);
        dummy->next=head;
        ListNode* temp=dummy;
        while(current!=NULL){
            if(current->val == val){
                temp->next=current->next;
            }
            else{
                temp->next=current;
                temp=temp->next;
            }
            current=current->next;
        }
        return dummy->next;
    }
};