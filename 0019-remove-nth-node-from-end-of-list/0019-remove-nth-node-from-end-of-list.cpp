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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || ((head->next==nullptr)&&(n==1))){
            return nullptr;
        }
        int count=0;
        ListNode* temp1=head;

        while(temp1!=nullptr){
            temp1=temp1->next;
            count++;
        }

        while(n==count){
            ListNode* newHead = head->next;
            delete head;
            return newHead;

        }
        
        ListNode* temp2=head;
        ListNode* before=nullptr;
        int len=count-n;
        int num=0;
        while(num!=len){
            before=temp2;
            temp2=temp2->next;
            num++;
        }
        before->next=temp2->next;
        delete temp2;
        return head;
    }
};