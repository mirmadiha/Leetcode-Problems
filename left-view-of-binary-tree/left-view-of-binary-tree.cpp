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
    vector<int> leftView(Node *root) {
        // code here
        vector<int>ans;
        if (root == NULL) 
        return ans;
        map<int,int>leftNodes;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            auto frontNodeData=temp.first->data;
            int level=temp.second;
            
            if(leftNodes.find(level)==leftNodes.end()){
                leftNodes[level]=frontNodeData;
            }
            
            if(temp.first->left){
                q.push(make_pair(temp.first->left,level+1));
            }
            if(temp.first->right){
                q.push(make_pair(temp.first->right,level+1));
            }
            
        }
        for(auto i:leftNodes){
                ans.push_back(i.second);
        }
        return ans;
    }
};
