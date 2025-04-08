/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  
  pair<bool,int>sum(Node* root){
      if(root==NULL){
          return{true,0};
      }
      
      if(root->left==NULL && root->right==NULL){
          return{true,root->data};
      }
      
      pair<bool,int>left=sum(root->left);
      pair<bool,int>right=sum(root->right);
     
      
      pair<bool,int>answer;
      
      if((left.second+right.second)!=root->data){
          answer={false,0};
      }
      
      else if(!left.first || !right.first){
          answer={false,0};
      }
      
      else{
          answer={true,left.second+right.second+root->data};
      }
      return answer;
  }
  
    bool isSumTree(Node* root) {
        // Your code here
        bool output=sum(root).first;
        return output;
    }
};
