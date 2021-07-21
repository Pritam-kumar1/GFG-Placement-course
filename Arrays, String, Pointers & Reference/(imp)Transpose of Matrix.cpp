class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here
        int t;
        for(int i=0;i<n;++i)
        {
            for(int j=i;j<n;j++)
            {
                t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
                
            }
        }
    }
};
