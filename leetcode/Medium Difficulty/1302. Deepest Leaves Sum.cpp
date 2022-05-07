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
    int s = 0;
    int maxdepth = INT_MIN;
    int deepestLeavesSum(TreeNode* root) {
        find_max_depth(root,0);
        recurse(root,0);
        return s;
    }
    void recurse(TreeNode* cur,int depth) {
        
        if (depth==maxdepth) {
            s+=cur->val;
            return;
        }
        if (cur->right !=NULL)
            recurse (cur->right, depth+1);
        if (cur->left !=NULL)
            recurse (cur->left , depth+1);
        
        
    }
    void find_max_depth (TreeNode* cur, int depth) {
        maxdepth = max(maxdepth,depth);
        if (cur->right !=NULL)
            find_max_depth (cur->right, depth+1);
        if (cur->left !=NULL)
            find_max_depth (cur->left , depth+1);
    }
    
};