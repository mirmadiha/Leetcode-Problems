/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* zeroHead = new Node(0);
        Node* oneHead = new Node(0);
        Node* twoHead = new Node(0);
        
        Node* zero = zeroHead;
        Node* one = oneHead;
        Node* two = twoHead;
        
        Node* temp=head;
        
        while(temp!=nullptr){
            Node* nextNode = temp->next; 
            temp->next = nullptr; 
            
            if(temp->data==0){
                zero->next=temp;
                zero=zero->next;
            }
            if(temp->data==1){
                one->next=temp;
                one=one->next;
            }
            if(temp->data==2){
                two->next=temp;
                two=two->next;
            }
            temp=nextNode;
        }
        zero->next=oneHead->next?oneHead->next:twoHead->next;
        one->next=twoHead->next;
        
        return zeroHead->next;
        
    }
};
