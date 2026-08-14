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
    int path(TreeNode* root, int& maxSumPath){
        if(root == NULL){
            return 0;
        }
        int left = path(root->left, maxSumPath);
        int right = path(root->right, maxSumPath);
        if(left < 0) left = 0;
        if(right < 0) right = 0;
        int sum =left + right + root->val;
        int maxSum = max(left, right) + root->val;
        maxSumPath = max(sum, maxSumPath);
        return maxSum;

    }
    int maxPathSum(TreeNode* root) {
        int maxSumPath = root->val;
        int ans = path(root, maxSumPath);
        return maxSumPath;
    }
};