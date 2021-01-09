class Solution {
public:
    vector<int> answer;
    
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector <int> s;
        for (int i=0;i<nums.size();i++) {
            while  (!s.empty() && nums[i]< s.back() && nums.size()-i+s.size() > k) s.pop_back();
            if (s.size()<k) s.push_back(nums[i]);
        }
        return s;
    }
};