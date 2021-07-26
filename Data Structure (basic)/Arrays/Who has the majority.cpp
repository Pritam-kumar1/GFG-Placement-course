class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int c1=0,c2=0;
        for(int i=0;i<n;++i)
        {
            if(arr[i]==x)
            {
                c1++;
            }
            else if(arr[i]==y)
            {
                c2++;
            }
        }
        if(c1==c2)
        {
            return min(x,y);
        }
        else 
        {
            if(c1>c2)
            {
                return x;
            }
            else 
            return y;
        }

    }
};
