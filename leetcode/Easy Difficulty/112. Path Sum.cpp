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
    
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root) return false;
        return recurse (root,0,sum);
    }
    bool recurse (TreeNode* root, int sum,int givenSum) {
        sum+=root->val;
        if (!root->left && !root->right) {
            return (sum==givenSum);
        }
        if (!root->left) return recurse(root->right,sum,givenSum);
        if (!root->right) return recurse(root->left,sum,givenSum);
        return recurse(root->left,sum,givenSum)||recurse(root->right,sum,givenSum);
    }
    
};