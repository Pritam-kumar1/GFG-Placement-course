class Solution{
    public:
    // arr[]: input array
    // n: size of the array
    // x: element for which you need to return the count
    int greaterThanX(int arr[],int n,int x)
    {
        // your code here
        int c=0;
        for(int i=0;i<n;++i){
            if(arr[i]>x){
                c++;
            }
        }
        return c;
    }
};
