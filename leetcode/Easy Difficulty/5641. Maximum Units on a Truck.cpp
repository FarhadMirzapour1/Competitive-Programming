class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        map<int,int> unittobox;
        for (auto i :boxTypes){
            if (unittobox.find(i[1])!=unittobox.end()) {
                int rem = unittobox[i[1]];
                unittobox[i[1]] = rem+i[0];
            }
            else {
                unittobox[i[1]] = i[0];
            }
            
        }
        map<int,int>::reverse_iterator rit;
        int sum=0;
        int total=0;
        bool stop=false;
        for (rit=unittobox.rbegin(); rit!=unittobox.rend() && !stop; ++rit) {
            int load = rit->first;
            int size = rit->second;
            //cout<<"size "<<size<<" load "<<load;
            if (sum+size<=truckSize){
                sum+=size;
                total+= size * load;
            }
            else {
                total+=  load * (truckSize-sum);
                stop=true;
            }
        }
        return total;
    }
};