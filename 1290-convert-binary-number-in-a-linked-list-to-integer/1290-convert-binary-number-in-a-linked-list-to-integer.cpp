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
    int getDecimalValue(ListNode* head) {
        vector<int>num;
        ListNode* temp=head;
        while(temp!=nullptr){
            num.push_back(temp->val);
            temp=temp->next;
        }
        int digit=0;
        for(int i=num.size()-1;i>=0;i--){
            digit+=pow(2,(num.size()-1)-i)*num[i];
        }
        return digit;
    }
};