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
        ListNode* sum=new ListNode(-1);
        ListNode* current=sum;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int result=carry;
            
            if (l1 != nullptr) {
                result += l1->val;
                l1 = l1->next;  
            }
            if (l2 != nullptr) {
                result += l2->val;
                l2 = l2->next;  
            }
            carry=result/10;
            current->next = new ListNode(result % 10);  
            current = current->next;
        } 
        return sum->next;
    }
};