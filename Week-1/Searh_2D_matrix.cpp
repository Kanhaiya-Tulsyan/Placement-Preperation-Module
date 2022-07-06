class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        int i=0,j=matrix[0].size()-1,k=0;
        while(i<matrix.size() && j>=0)
        {
            
            if(matrix[i][j]==target)
            {
                k=1;
                break;
                
            }
            else if(matrix[i][j]>target)
                j--;
            else
                i++;
     
        }
        if(k==1)
            return true;
        else
            return false;
        
        
    }
};