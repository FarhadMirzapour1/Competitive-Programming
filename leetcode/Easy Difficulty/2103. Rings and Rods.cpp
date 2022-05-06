class Solution {
public:
    int countPoints(string rings) {
        vector<vector<int>> rs;
        for (int i = 0 ; i< 10; i ++) {
            vector<int> colors (3,0);
            rs.push_back(colors);
        }
        for (int i = 0 ; i < rings.size();i++ ) {
            if (rings.at(i) == 'R' ) {
                rs[rings.at(i+1) - '0'][0]++;
            }
            if (rings.at(i) == 'G' ) {
                rs[rings.at(i+1) - '0'][1]++;
            }
            if (rings.at(i) == 'B' ) {
                rs[rings.at(i+1) - '0'][2]++;
            }
        }
        int answer = 0;
        for (auto v : rs) {
            if (v[0]>=1 && v[1]>=1 && v[2]>=1) answer++;
        }
        return answer;
    }
};