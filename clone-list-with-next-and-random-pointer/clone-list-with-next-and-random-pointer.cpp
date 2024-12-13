/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

class Solution {
  public:
    Node *copyList(Node *head) {
        // Write your code here
        if(head==NULL){
            return NULL;
        }
        //creating copy of orginal list alongside
        Node*temp=head;
        while(temp!=NULL){
            Node* copy=new Node(temp->data);
            copy->next=temp->next;
            temp->next=copy;
            temp=copy->next;
        }
        
        // adding random pointer
        temp=head;
        while(temp!=NULL){
            if(temp->random!=NULL){
            temp->next->random=temp->random->next;
            }
            temp=temp->next->next;
        }
        
        // separating the original and copy list
        Node* link1=head;
        Node* list2=head->next;
        Node* link2=list2;
        while(link1!=NULL){
            link1->next=link2->next;
            link1=link1->next;
            if(link1!=NULL){
            link2->next=link1->next;
            link2=link2->next;
            }
        }
        return list2;
    }
};
