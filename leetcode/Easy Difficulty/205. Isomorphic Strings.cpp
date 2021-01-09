class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,char> q;
        unordered_set <char> h;
        int p=0;
        for (char i :s) {
            if (q.find(i)!=q.end() ) {
                
                if (q[i]!=t[p]) {return false;}
            }
            else {
                if (h.find(t[p])!=h.end()) return false;
                q[i]=t[p];
                h.insert(t[p]);
                
            }
            p++;
        }
        return true;
    }
};