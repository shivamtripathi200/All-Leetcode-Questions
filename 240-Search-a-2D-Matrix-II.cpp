class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int startIndex = 0;
        int endIndex = col-1;
        
        while(startIndex<row && endIndex>=0){
            int element = matrix[startIndex][endIndex];
            if(element == target)
                return 1;
            else if(element<target)
                startIndex++;
            else
                endIndex--;
        }
        
        return 0;
    }
};