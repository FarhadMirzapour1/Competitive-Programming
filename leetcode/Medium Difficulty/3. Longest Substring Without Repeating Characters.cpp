class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans=0;
        int start=0;
        for (int i=0;i<s.length();i++) {
            for (int j=start;j<i;j++) {
                if (s[j]==s[i]) {
                    start = j+1;
                }
            }
            ans=max(ans,i-start+1);
        }
        return ans;
        
    }
};