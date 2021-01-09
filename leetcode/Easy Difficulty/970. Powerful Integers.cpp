class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        bool canCont=true;
        int i=0;
        int j=0;
        unordered_set<int> answer;
        vector<int> output;
        int num=0;
        while (canCont) {
            num = pow(x,i)+pow(y,j);
            if ( (x==1||y==1) && num>bound)  canCont=false;
            if (x==1 && y==1 ) {
                
                canCont=false;
            }    
                
            
            if (y==1) i++;
            if (num<=bound) {
                answer.insert(num);
                j++;
            }
            else {
                i++;
                j=0;
                if ( (pow(x,i)+pow(y,j)) > bound) {
                    
                    canCont=false;
                }
                    
                
            }
        }
        for (int q : answer) {
            output.push_back(q);
        }
        return output;
    }
};