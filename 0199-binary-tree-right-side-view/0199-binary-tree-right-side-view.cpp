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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if (root == NULL) 
        return ans;
        map<int,int>rightNodes;
        queue<pair<TreeNode*,int>>q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            auto frontNodeData=temp.first->val;
            int level=temp.second;
            
            if(rightNodes.find(level)==rightNodes.end()){
                rightNodes[level]=frontNodeData;
            }
            
            if(temp.first->right){
                q.push(make_pair(temp.first->right,level+1));
            }

            if(temp.first->left){
                q.push(make_pair(temp.first->left,level+1));
            }
            
        }
        for(auto i:rightNodes){
                ans.push_back(i.second);
        }
        return ans;
    }
};