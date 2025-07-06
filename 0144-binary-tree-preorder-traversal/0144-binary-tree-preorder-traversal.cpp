class Solution {
public:
    void preorder(TreeNode* root, vector<int>& result) {
        if (root == NULL) return;
        
        result.push_back(root->val);  // Visit root
        preorder(root->left, result); // Visit left subtree
        preorder(root->right, result); // Visit right subtree
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorder(root, result);
        return result;
    }
};
