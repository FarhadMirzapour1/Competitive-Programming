class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        bfs(root,1);
        vector<vector<int>> ret;
        for (auto k : ans) ret.insert(ret.begin(),k);
        return ret;
    }
    void bfs (TreeNode* root, int level) {
        if (!root) return;
        if (level>ans.size()) {
            vector<int> thisl;
            ans.push_back(thisl);
            
        }
        ans[level-1].push_back(root->val);
        bfs(root->left,level+1);
        bfs(root->right,level+1);
        
        
    }
};