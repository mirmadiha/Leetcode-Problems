/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> topView(Node *root) {
         vector<int> result;
        if (!root)
            return result;
        
        int minHD = 0, maxHD = 0;
        queue<pair<Node*, int>> q1;
        q1.push({root, 0});
        
        while (!q1.empty()) {
            Node* node = q1.front().first;
            int hd = q1.front().second;
            q1.pop();
            
            minHD = min(minHD, hd);
            maxHD = max(maxHD, hd);
            
            if (node->left)
                q1.push({node->left, hd - 1});
            if (node->right)
                q1.push({node->right, hd + 1});
        }
        
        int size = maxHD - minHD + 1;
        vector<int> topNodes(size, -1);
        vector<bool> visited(size, false);
        
        queue<pair<Node*, int>> q2;
        q2.push({root, 0});
        
        while (!q2.empty()) {
            Node* node = q2.front().first;
            int hd = q2.front().second;
            q2.pop();
            
            int idx = hd - minHD;
            
            if (!visited[idx]) {
                topNodes[idx] = node->data;
                visited[idx] = true;
            }
            
            if (node->left)
                q2.push({node->left, hd - 1});
            if (node->right)
                q2.push({node->right, hd + 1});
        }
        
        for (int i = 0; i < size; i++) {
            result.push_back(topNodes[i]);
        }
        
        return result;
        
    }
};
