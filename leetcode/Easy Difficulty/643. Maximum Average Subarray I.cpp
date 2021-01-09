class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        
        for (int i =0;i<k;i++) {
            sum+= nums[i];
        }
        
        double average =  sum/(double)k;
        
        for (int i =k;i<nums.size();i++) {
            int replace = nums[i-k];
            sum-=replace;
            sum+=nums[i];
            
            double newAverage = sum/(double)k;
            
            average =  max(newAverage,average);
        }
        return average;
    }
};