class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for (char i : s) {
            if (i=='(' || i=='{' || i=='[' ) st.push(i);
            else {
                
                if (st.empty()) return false;
                char popped = st.top();
                st.pop();
                if((i==')'&& popped!='(')||(i=='}' && popped!='{')|| (i==']' && popped!='[' ) ) 
                    return false;
                }    
     
        }
        return st.empty();
    }
};