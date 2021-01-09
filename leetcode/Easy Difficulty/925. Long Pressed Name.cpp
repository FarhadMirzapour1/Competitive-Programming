class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if (name[0]!=typed[0]) return false;
        int j=1;
        for (int i=1;i<typed.length();i++) {
            if (typed[i]==name[j]) 
                j++;            
            else if (typed[i]!=typed[i-1]) 
                return false;            
        }
        return (j==name.size());
    }
};