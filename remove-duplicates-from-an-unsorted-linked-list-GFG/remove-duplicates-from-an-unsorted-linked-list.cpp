/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        map<int,bool>visited;
        Node* current=head;
        Node*previous=NULL;
        while(current!=NULL)
        {
            if(visited[current->data])
            {
                previous->next=current->next;
                delete(current);
                current=previous->next;
            }
            else
            {
                visited[current->data]=true;
                previous=current;
                current=current->next;
            }
        }
        return head;
    }
};
