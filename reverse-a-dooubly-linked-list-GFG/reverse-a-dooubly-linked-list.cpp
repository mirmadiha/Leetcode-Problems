/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        
        Node* temp=nullptr;
        Node* curr=head;
        while(curr!=nullptr){
            temp=curr->prev;
            curr->prev=curr->next;
            curr->next=temp;
            curr=curr->prev;
        }
        return temp->prev;
    }
};
