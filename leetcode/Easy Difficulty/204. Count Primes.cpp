class Solution {
public:
    int countPrimes(int n) {
        vector <bool> primes (n-1,true);
        int counter=0;
        for (int i=2;i<n;i++) {
            if (primes[i]) {
                counter++;
                for (int j=i;j<n;j+=i) {
                    primes[j]=false;
                  
                }
            }
        }
        return counter;
    }
};