/*
The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        // code here
        if(head==NULL){
            return {NULL,NULL};
        }
        if(head->next==head){
            return {head,head};
        }
        if(head->next->next==head){
            Node* head2 = head->next;
            head->next = head;
            head2->next = head2;
            return {head, head2};
        }
        
        Node* slow=head;
        Node* fast=head;
        while(fast->next!=head && fast->next->next!=head){
            slow=slow->next;
            fast=fast->next->next;
            }
        Node*head2=slow->next;
        slow->next=head;
        if(fast->next==head){
            fast->next=head2;
        }
        else{
            fast->next->next=head2;
        }
        return {head , head2};
    }
    
};
