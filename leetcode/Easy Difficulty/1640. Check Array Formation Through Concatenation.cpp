class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        string read;
        string inverse;
        string wanted;
        unordered_set <string> allPieces;
        for (int i =0; i< pieces.size();i++) {
            read="";
            for (int j=0;j<pieces[i].size();j++) {
                read=read+to_string(pieces[i][j]);
                
            }
            allPieces.insert(read);
        }
        for (int k : arr) {
            wanted+=to_string(k);
            if (allPieces.find(wanted)!=allPieces.end()) {wanted="";}
            
        }
        return (wanted=="");
        
        
        
    }
};