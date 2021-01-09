class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        if (len==0) return "";
        string common = strs[0];
        for (int i = 1 ;i < len; i++) {
            string newCommon="";
            bool matching = true;
            for (int j =0;j<common.length() && matching ;j++) {
                if (j<strs[i].length() && common[j]== strs[i][j]) {
                    newCommon+=common[j];
                }
                else {
                    matching = false;
                }
            }
            common=newCommon;
            if (common=="") {return common;}
        }
        return common;
    }
};