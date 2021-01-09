class Solution {
public:
    int maxRepeating(string sequence, string word) {
        string searching = word;
        int count=0;
        while (sequence.find(searching)!=string::npos) {
            count++;
            searching+=word;
        }
        return count;
    }
};