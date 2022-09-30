class Solution {
    
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> track;
        
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j]==0){
                    for(int k=0; k<cols; k++){
                        if(matrix[i][k]!=0){
                            track.push_back(i);
                            track.push_back(k);
                        }
                    }
                        
                    for(int l=0; l<rows; l++){
                        if(matrix[l][j]!=0){
                            track.push_back(l);
                            track.push_back(j);
                        }
                    }
                }
            }
        }
        int len = track.size();
        
        for(int i=0; i<len-1; i=i+2){
            // cout<<track[i];
            matrix[track[i]][track[i+1]]=0;
        }        
    }
};