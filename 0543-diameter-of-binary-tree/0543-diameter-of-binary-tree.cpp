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
    int depth(TreeNode* root, int& maxDia) {
        if(root == NULL){
            return 0;
        }
        int left = depth(root->left, maxDia);
        int right = depth(root->right, maxDia);
        int dia = left + right;
        maxDia = max(maxDia,dia);
        return max(left,right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        depth(root, maxDia);
        return maxDia;
    }
};