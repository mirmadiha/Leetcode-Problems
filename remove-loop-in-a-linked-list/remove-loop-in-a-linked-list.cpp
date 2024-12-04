/*structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node* floydsDetectionCycle(Node* head){
      if(head==NULL){
          return NULL;
      }
      Node* slow=head;
      Node* fast=head;
      while(fast!=NULL && slow!=NULL){
          fast=fast->next;
          if(fast!=NULL){
              fast=fast->next;
          }
          slow=slow->next;
          if(slow==fast){
              return slow;
          }
      }
      return NULL;
  }
  
  Node* getStartOfLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection=floydsDetectionCycle(head);
    if(intersection==NULL){
        return NULL;
    }
    Node* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
  }
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        if(head==NULL){
            return;
        }
            Node* start=getStartOfLoop(head);
            if(start==NULL){
                return;
            }
            Node* temp=start;
            while(temp->next!=start){
                temp=temp->next;
            }
            temp->next=NULL;
    }
};
