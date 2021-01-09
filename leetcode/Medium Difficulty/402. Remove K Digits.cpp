class Solution {
public:
    string removeKdigits(string num, int t) {
        vector <char> s;
        int len = num.length();
        int k = len-t;
        
        for (int i=0;i<len;i++) {
            while  (!s.empty() && num[i]< s.back() && len-i+s.size() > k) s.pop_back();
            if (s.size()<k) s.push_back(num[i]);
        }
        string ret="";
        bool add = false;
        for (int j =0;j<s.size();j++) {
            if (s[j]!='0' || add) {
                ret+=s[j];
                add=true;
            }
            
        }
        if (ret=="") ret = "0";
        return ret;
    }
    
};