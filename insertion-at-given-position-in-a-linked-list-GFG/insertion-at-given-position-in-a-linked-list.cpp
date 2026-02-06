/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        if(head==nullptr){
            return head;
        }
        
        Node* element=new Node(val);
        
        if(pos==1){
            element->next=head;
            head=element;
        }
        else{
        int count=1;
        Node* temp=head;
        Node* before=nullptr;
        while(count<pos){
            before=temp;
            temp=temp->next;
            count++;
        }
        before->next=element;
        element->next=temp;
        }
        return head;
    }
};
