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

pair<int,bool>height(TreeNode* root){
    if(root==NULL){
        pair<int,bool>p={0,true};
        return p;
    }

    pair<int,bool>left=height(root->left);
    pair<int,bool>right=height(root->right);
    pair<int,bool>answer;
    answer.first=max(left.first,right.first)+1;
    if(abs(left.first-right.first)>1){
        answer.second=false;
    }
    else if(!left.second || !right.second){
        answer.second=false;
    }
    else{
        answer.second=true;
    }
    return answer;
}

    bool isBalanced(TreeNode* root) {
        return height(root).second;
    }
};