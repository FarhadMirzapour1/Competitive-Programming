class Solution {
public:
    unordered_set <int> powers;
    int countPairs(vector<int>& deliciousness) {
        int mod = 1000000007;
        unordered_map <long long,long long> delic;
        for (int i=0;i<=21;i++) {
            powers.insert(pow(2,i));
        }
        for (int i : deliciousness) {
            if (delic.find(i)!=delic.end()) delic[i]++;
            
            else delic[i]=1;
                
            
        }
        long long answer=0;
        for (auto pairs : delic) {
            int key = pairs.first;
            long long num=pairs.second;
            
            for (int powerOf : powers) {
                if (delic.find(powerOf-key)!=delic.end()) {
                    if (2*key==powerOf) answer+= (num*(delic[key]-1));
                    else answer+=num*delic[powerOf-key];
                    
                    cout<<key<<" "<<powerOf-key<<" "<<num*delic[powerOf-key]<<"\n";
                }
            }
        }
        return (answer/(long long)2 ) % mod;
        
    }
   
};