class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0)
            return;
        int first_row = -1;
        int first_col = -1;
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0 && i==0) //if zero in first row
                    first_row=1;
                if(matrix[i][j]==0 && j==0) //if zero in the first col
                    first_col=1;
                if(matrix[i][j]==0) //if zero anywhere else
                    matrix[0][j]=matrix[i][0]=0;
            }
        }
        //iterate for the first col
        for(int i=1;i<n;i++)
            if(matrix[i][0]==0){
                for(int j=1;j<m;j++)
                    matrix[i][j]=0;
            }
        //iterate for the first row
        for(int i=1;i<m;i++)
            if(matrix[0][i]==0){
                for(int j=1;j<n;j++)
                    matrix[j][i]=0;
    }
        if(first_row==1){
            for(int i=0;i<m;i++)
                matrix[0][i]=0;
        }
        if(first_col==1){
            for(int i=0;i<n;i++)
                matrix[i][0]=0;
        }
        return;
    }    
};
