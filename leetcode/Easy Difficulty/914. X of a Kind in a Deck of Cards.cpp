class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int len = deck.size();
        vector<int> counter (10000,0);

        for (int i=0;i<len;i++) {
            counter[deck[i]]++;
        }
        int theGcd=counter[deck[0]];
        for (int j : deck) {
            theGcd=gcd(theGcd,counter[j]);
        }
        return ( theGcd!=1 );
    }
};