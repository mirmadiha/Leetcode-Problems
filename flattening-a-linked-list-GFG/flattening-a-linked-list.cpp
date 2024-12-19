/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

Node*  merge(Node* left, Node* right){
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return left;
        }
        Node* temp=new Node(-1);
        Node* ans=temp;
        while(left!=NULL && right!=NULL){
            if(left->data<right->data){
                ans->bottom=left;
                left=left->bottom;
                ans=ans->bottom;
            }
            else{
                ans->bottom=right;
                right=right->bottom;
                ans=ans->bottom;
            }
        }
        while(left!=NULL){
            ans->bottom=left;
            ans=ans->bottom;
            left=left->bottom;
        }
        while(right!=NULL){
            ans->bottom=right;
            ans=ans->bottom;
            right=right->bottom;
        }
        temp=temp->bottom;
        return temp;
    }

    
    

class Solution {
  public:
 
    Node *flatten(Node *root) {
        
         if (root == NULL || root->next == NULL) return root;

        root->next = flatten(root->next);

        root = merge(root, root->next);

        return root;
    }
};
