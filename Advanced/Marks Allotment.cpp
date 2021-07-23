class Solution{
public:
    int marks(int A){
        // code here
        try {
            if(A<0||A>100)
            throw -1;
            else
            return A;
        }
        catch(int i)
        {
            return i;
        }
    }
};
