class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        if(A[0].size()!=B.size())
        {
            vector<vector<int>> v;
            return v;
        }
        else
        {
            vector<vector<int>> temp(A.size(),vector<int>(B[0].size(),0));
            for(int i=0;i<A.size();++i)
            {
                for(int j=0;j<B[0].size();++j)
                {
                    for(int k=0;k<A[0].size();++k)
                    {
                        temp[i][j]+=A[i][k]*B[k][j];
                    }
                }
            }
            return temp;
        }
        
    }
};