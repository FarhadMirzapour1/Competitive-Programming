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
    vector<double> sum;
    vector<double> count;
    vector<double> averageOfLevels(TreeNode* root) {
        dfs(root,1);
        for (int i =0;i<sum.size();i++) sum[i]/=count[i];
        return sum;
    }
    void dfs (TreeNode* root, int level) {
        if (!root) return;
        if (level>sum.size()) {
            sum.push_back(0);
            count.push_back(0);
        }
        sum[level-1]+= root->val;
        count[level-1]++;
        dfs(root->left,level+1);
        dfs(root->right,level+1);
    }
};