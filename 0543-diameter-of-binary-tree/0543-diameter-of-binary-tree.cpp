/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    pair<int,int>diameter(TreeNode* root){
        if(root==NULL){
            pair<int,int>p={0,0};
            return p;
        }

        pair<int,int>left=diameter(root->left);
        pair<int,int>right=diameter(root->right);

        int option1=left.first;
        int option2=right.first;
        int option3=left.second+right.second;
        pair<int,int>answer;
        answer.first=max(option1,max(option2,option3));
        answer.second=max(left.second,right.second)+1;
        return answer;
        
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int result=diameter(root).first;
        return result;
    }
};