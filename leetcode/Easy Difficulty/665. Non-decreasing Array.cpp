public:
    bool checkPossibility(vector<int>& nums) {
        int len=nums.size();
        int counter=0;
        for (int i =0 ; i<len-1; i ++) {
            
            if (nums[i+1] < nums[i]) {
                counter++;
                if (i!=0 && i!=len-2) {
                    if (nums[i+1] < nums[i-1] && nums[i+2] < nums[i]) {
                        return false;
                    }
                }
                
            }
            if (counter>=2) return false;
                
            
        }
        return true;
    }
};