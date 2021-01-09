class Solution {
public:
    bool buddyStrings(string A, string B) {
        int lenA = A.length();
        if (lenA!=B.length()) return false;
        bool first = 0;
        int index;
        bool second = false;
        unordered_set<char> backup;
        for (int i =0;i<lenA;i++) {
            backup.insert(A[i]);
            if (A[i]!=B[i]) {
                if (second) return false;
                
                
                if (first)  {
                    char temp = A[index];
                    A[index]=A[i];
                    A[i]= temp;
                    second = true;
                   
                }
                else {
                    first = true;
                    index = i;
                }
            }
        }
        return ( (A==B && second==true)|| (A==B && second==false && backup.size()!=lenA));
    }
};