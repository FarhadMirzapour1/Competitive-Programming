class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string> answer;
        if (nums.empty()) return answer;
        int first= nums[0];
        int last = nums[0];
        for (int i=0;i<nums.size()-1; i++) {
            if (nums[i+1]==nums[i]+1) last=nums[i+1];
            else {
                if (first==last) answer.push_back(to_string(first));
                else answer.push_back(to_string(first)+"->"+to_string(last));
                first=nums[i+1];
                last=first;
            }
                
            
        }
        if (first==last) answer.push_back(to_string(first));
        else answer.push_back(to_string(first)+"->"+to_string(last));
        return answer;
    }
};