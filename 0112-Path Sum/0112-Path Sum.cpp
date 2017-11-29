/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr) {
            return false;
        }
        
        sum -= root->val;
        if (sum == 0 && root->left == nullptr && root->right == nullptr) {
            return true;
        }
        
        bool left = hasPathSum(root->left, sum);
        bool right = hasPathSum(root->right, sum);
        return left || right;
    }
};
