/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int sumK(Node *root, int k) {
        vector<int> path;
        return findSum(root, k, path);
    }
    
    int findSum(Node* node, int k, vector<int>& path) {
        if (!node) return 0;

        path.push_back(node->data);

        int count = 0;
        int sum = 0;
        
        for (int i = path.size() - 1; i >= 0; --i) {
            sum += path[i];
            if (sum == k) count++;
        }

        count += findSum(node->left, k, path);
        count += findSum(node->right, k, path);

        path.pop_back();

        return count;
    }
};
