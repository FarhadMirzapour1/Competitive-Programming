class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for (auto center : queries) {
            int curr = 0;
            for (auto point: points) {
                curr += ( sqrt(pow(center[0]-point[0],2) + pow(center[1]-point[1],2)) <= center[2] );
            }
            ans.push_back(curr);
        }
        return ans;
    }
};