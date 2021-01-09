class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> answer;
        int carry=1;
        
        for (int i=n-1;i>=0;i--) {
            if (digits[i]+carry>9) {
                string k = to_string(digits[i]+carry);

                answer.insert(answer.begin() , k[1] - '0' );
                carry = k[0] - '0' ;
            }
            else {
                answer.insert(answer.begin() ,(digits[i]+carry) );
                carry=0;
            }
        }
        
        if (carry!=0) answer.insert(answer.begin() ,carry);
        return answer;
        
    }
};