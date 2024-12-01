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
 int listLength(ListNode* head){
    int count=0;
    ListNode* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
 }

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    int len=listLength(head);
    if(head==NULL){
        return NULL;
    }
    if(len<k){
        return head;
    }
    
    int count=0;
    ListNode* forward=NULL;
    ListNode* previous=NULL;
    ListNode* current=head;

    while(current!=NULL && count<k){
        forward=current->next;
        current->next=previous;
        previous=current;
        current=forward;
        count++;
    }
    if(forward!=NULL){
        head->next=reverseKGroup(forward,k);
    }
    return previous;
    }
};