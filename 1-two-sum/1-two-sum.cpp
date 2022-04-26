class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        vector<int> answer;
        for (int i = 0; i<nums.size();i++) {
            if ( a.find(target-nums[i]) != a.end()){
                answer.push_back(i);
                answer.push_back ( a[target-nums[i]] );
                return answer;
                
            } 
            a[nums[i]]=i;
            
        }
        return answer;
        
    }
};