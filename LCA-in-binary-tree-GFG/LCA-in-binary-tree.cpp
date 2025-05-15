/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    // Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root, int n1, int n2) {
        // Your code here
        if(root==NULL){
            return NULL;
        }
        
        Node* first=lca(root->left,n1,n2);
        if(root->data==n1 || root->data==n2){
            return root; 
        }
        
        Node*second=lca(root->right,n1,n2);
        if(first==NULL && second==NULL){
            return NULL;
        }
        if(first!=NULL && second==NULL){
            return first;
        }
        if(first==NULL && second!=NULL){
            return second;
        }
        if(first!=NULL && second!=NULL){
            return root;
        }
    }
};
