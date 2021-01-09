class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int xDir[4]={0,1,0,-1};
        int yDir[4]={1,0,-1,0};
        int dirIndex=0;
        int maxSquareDistance=0;
        int currentxDir=0;
        int currentyDir=1;
        int xcoord=0;
        int ycoord=0;

        unordered_set<string>  allObstacles;
        for (vector<int> o: obstacles)
            allObstacles.insert(to_string (o[0])+"."+to_string (o[1]) ); 
        
        
        for (int i=0;i<commands.size();i++) {
            if (commands[i]==-1) {
                dirIndex= (dirIndex+1) % 4;
                currentxDir = xDir[dirIndex];
                currentyDir = yDir[dirIndex];
            }
            else if (commands[i]==-2) {
                dirIndex= (dirIndex==0) ? dirIndex+3 : dirIndex-1;
                currentxDir = xDir[dirIndex];
                currentyDir = yDir[dirIndex];
            }
            else {
                bool reachedObstacle = false;
                for (int t=1;t<=commands[i] && !reachedObstacle ;t++) {
                    if ( allObstacles.find(to_string(xcoord+currentxDir)+"."+ to_string(ycoord+currentyDir))==allObstacles.end()) {
                        xcoord+= currentxDir;
                        ycoord+= currentyDir;
                        maxSquareDistance = max(maxSquareDistance, xcoord*xcoord + ycoord*ycoord);
                    }
                    else {reachedObstacle=true;}
                }
            }
        }
        
        return maxSquareDistance;
    }
};