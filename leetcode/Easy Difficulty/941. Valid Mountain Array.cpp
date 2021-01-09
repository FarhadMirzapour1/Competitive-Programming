class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int len = arr.size();
        if (len<3) return false;
        bool increasing = true;
        for (int i=0;i<len-1;i++) {
            if (arr[i]==arr[i+1]) return false;
            if (increasing) {
                
                if (arr[i+1]<arr[i]) {
                    if (i==0) return false;
                    increasing = false;
                }
            }
            else if (arr[i+1]>arr[i])  return false;
                 
                 
            
        }
        return (!increasing);
    }
};