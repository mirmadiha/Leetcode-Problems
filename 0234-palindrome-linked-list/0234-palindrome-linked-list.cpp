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
    int lengthOfList(ListNode* head){
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }

    bool isPalindrome(ListNode* head) {
        int length=lengthOfList(head);
        vector<int> arr;
        ListNode*current=head;
        while(current!=NULL){
            arr.push_back(current->val);
            current=current->next;
        }

        int start=0;
        int end=length-1;
        while(start<=end){
            if(arr[start]!=arr[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};