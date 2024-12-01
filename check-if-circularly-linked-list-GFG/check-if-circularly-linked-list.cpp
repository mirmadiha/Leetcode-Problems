struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if(head==NULL){
            return true;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            if(temp->next==head){
                return true;
            }
            temp=temp->next;
        }
        
        return false;
    }
};
