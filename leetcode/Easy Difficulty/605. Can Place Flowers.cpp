class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool canPlace = true;
        int len = flowerbed.size();
        int counter = 0;
        for (int i=0;i<len;i++) {
            if (i!=0 && flowerbed[i-1]==1) canPlace = false;
            if (i!=len-1 && flowerbed[i+1]==1) canPlace = false;
            if (flowerbed[i]==1) canPlace = false;
            if (canPlace) {
                flowerbed[i]=1;
                counter++;
                
            }
            canPlace=true;
            if (counter>=n) {
                return true;
            } 
        }
        return false;
    }
};