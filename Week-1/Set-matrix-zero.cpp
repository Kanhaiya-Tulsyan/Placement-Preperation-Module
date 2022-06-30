class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row=mat.size(),column=mat[0].size(),col=1;
        
        for(int i=0;i<row;i++)
        {
            if(mat[i][0]==0)  col=0;
            for(int j=1;j<column;j++)
            {
                if(mat[i][j]==0)
                    mat[i][0]=mat[0][j]=0;
            }
        }
         
        for(int i=row-1;i>=0;i--)
        {
            for(int j=column-1;j>=1;j--)
            {
                if(mat[i][0]==0 || mat[0][j]==0)  mat[i][j]=0;
            }
                if(col==0)  mat[i][0]=0;
                
            }
            
        }
        //comp-> 2*(n*m)
        
    
};