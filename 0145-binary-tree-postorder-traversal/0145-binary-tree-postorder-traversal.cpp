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
    void postorder(TreeNode* root, vector<int>& result) {
        if (root == NULL) return;
        
        
        postorder(root->left, result); // Visit left subtree
        postorder(root->right, result); // Visit right subtree
        result.push_back(root->val);  // Visit root
    }
    
    vector<int> postorderTraversal(TreeNode* root){
        vector<int> result;
        postorder(root, result);
        return result;
    }
};
