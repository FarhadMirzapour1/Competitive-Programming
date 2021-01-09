class Solution {
public:
    int sum=0;
    int countArrangement(int n) {
        vector <int>visited (n+1,0);
        recurse (1,n,visited);
        return sum;
        
    }
    void recurse (int i,int goal, vector<int> q) {
        
        if (i>goal) {sum++;}
        for (int j=1;j<=goal;j++) {
            if ( ( j%i ==0 || i%j==0 ) && !q[j]){
                q[j]=1;
                recurse (i+1,goal,q);
                q[j]=0;
            }
        }
        
    }
    
};