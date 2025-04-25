/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
  void leftTraversal(Node *root, vector<int> &arr){
      if((root==NULL)||(root->left==NULL && root->right==NULL)){
        return; 
      }
      
      arr.push_back(root->data);
      
     if(root->left){
         leftTraversal(root->left,arr);
     }
     else{
         leftTraversal(root->right,arr);
     }
  }
  
  void leafNodeTraversal(Node *root, vector<int> &arr){
      if(root==NULL){
          return;
      }
      
      if(root->left==NULL && root->right==NULL){
          arr.push_back(root->data);
      }
      
      leafNodeTraversal(root->left,arr);
      
      leafNodeTraversal(root->right,arr);
      
  }
  
  void rightTraversal(Node *root, vector<int> &arr){
      if((root==NULL)||(root->left==NULL && root->right==NULL)){
        return; 
      }
      
     if(root->right){
         rightTraversal(root->right,arr);
     }
     else{
         rightTraversal(root->left,arr);
     }
     arr.push_back(root->data);
     
  }
  
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>arr;
        if(root==NULL){
            return arr;
        }
        arr.push_back(root->data);
        
        leftTraversal(root->left, arr);
        
        leafNodeTraversal(root->left,arr);
        
        leafNodeTraversal(root->right,arr);
        
        rightTraversal(root->right, arr);
        
        return arr;
        
    }
};
