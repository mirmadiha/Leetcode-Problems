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
        
        Node* temp=head;
        Node* before=nullptr;
        while(temp!=nullptr){
            Node* after=temp->next;
            temp->next=before;
            temp->prev=after;
            before=temp;
            temp=after;
        }
        return before;
    }
};
