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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;

        q.push(make_pair(root, make_pair(0, 0)));
        while(!q.empty()){
            auto temp=q.front();
            q.pop();

            TreeNode* frontNode=temp.first;
            auto hd=temp.second.first;
            auto level=temp.second.second;

            nodes[hd][level].insert(frontNode->val);

            if(frontNode->left){
                q.push(make_pair(frontNode->left, make_pair(hd-1, level+1) ));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right, make_pair(hd+1, level+1) ));
            }
        }


            for (auto col : nodes) {
                vector<int> vertical;
                for (auto level : col.second) {
                    for (int val : level.second) {
                        vertical.push_back(val);
                    }
                }

                ans.push_back(vertical);
            }

            return ans;
    }
};