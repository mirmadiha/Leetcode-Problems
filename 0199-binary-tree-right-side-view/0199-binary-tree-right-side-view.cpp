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
        if(root==nullptr) return {};
        queue<TreeNode*> levels;
        levels.push(root);
        int size=1;
        vector<int> ans;
        while(!levels.empty())
        {
            ans.push_back(levels.front()->val);
            int x=size;
            size=0;
            for(int i=0;i<x;i++)
            {
                TreeNode* t=levels.front();
                levels.pop();
                if(t->right!=nullptr)
                {
                    levels.push(t->right);
                    size++;
                }
                if(t->left!=nullptr)
                {
                    levels.push(t->left);
                    size++;
                }
            }
        }

        return ans;
    }
};