class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret=0;
        int power = 31;
		
        while (n) {
			int digit = (n&1) << power ;
            ret = ret + digit;
            power--;
            n= n >> 1;
        }
        return ret;
    }
};