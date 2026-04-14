class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0,hi=(n*m-1);
        int mid;
        while(hi-low>1){
            mid = (low+hi)/2;
            int i = mid/m;
            int j = mid%m;
            if(matrix[i][j]>target){
                hi = mid-1;
            }
            else{
                low = mid;
            }
        }
        int i,j;
        i=hi/m;
        j=hi%m;
        if(matrix[i][j]==target){
            return true;
        }
        i=low/m;
        j=low%m;
        if(matrix[i][j]==target){
            return true;
        }
        
        return false;
    }
};
