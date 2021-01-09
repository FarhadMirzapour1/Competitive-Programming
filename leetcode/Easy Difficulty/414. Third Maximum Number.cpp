class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set <int> numbers;
        for (int i : nums) {
            numbers.insert(i);     
        }
        if (numbers.size()<3) {
            return *numbers.rbegin() ;
        }
        set<int>::reverse_iterator revIt = numbers.rbegin();
        revIt++;
        revIt++;
        return *revIt;
    }
};