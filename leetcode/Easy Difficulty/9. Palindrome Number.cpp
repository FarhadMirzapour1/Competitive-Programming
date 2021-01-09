class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        long long inverse=0;
        long long copy=x;
        while (copy >=1) {
            inverse=inverse*10 + copy%10;
            copy/=10;
        }
        return (inverse==x);
        
    }
};