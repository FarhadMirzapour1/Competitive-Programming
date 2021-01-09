class Solution {
public:
    bool validPalindrome(string s) {
        int len=s.length();
        for (int i=0;i<len/2;i++) {
            if (s[i]!=s[len-1-i]) {
                string t=s;
                
                return (isPalindrome(t.erase(i,1)) || isPalindrome(s.erase(len-1-i,1)));
            }
        }
        return true;
    }
    bool isPalindrome (string a) {
        int leng = a.length();
        if (leng==0 || leng==1) {return true;}
        for (int i=0;i<leng/2;i++){
            if (a[i]!=a[leng-1-i]) {return false;}
        }
        return true;
        
    }
};