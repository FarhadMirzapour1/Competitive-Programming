class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map <char,string> m;
        s=s+" ";
        string stri="";
        int i =0;
        int counter=0;
        for (char q : s) {
            if (q==' ') {
                counter++;
				cout<<stri;
                if ( (m.find(pattern[i])!=m.end() && m[pattern[i]]!=stri)  ) {
					
                    return false;
                }
                else if (m.find(pattern[i])==m.end()) {
                    m[pattern[i]]=stri;
                    i++;
                    stri="";
                }
                else {
                    i++;
					stri="";
                }
            }
            else {
                stri+=q;
            }
        }
        unordered_set <string>p;
        unordered_set <char> chars;
        for (char key : pattern) {
            if (p.find(m[key])!=p.end() && chars.find(key)==chars.end()) {
                cout<<"asd";
                return false;
            }
            p.insert(m[key]);
            chars.insert(key);
        }
        
        return (pattern.length()==counter);
    }
    
};