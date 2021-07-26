class Solution{
    public:
    // arr[]: input array
    // n: size of array
    // x: element for which you need to find smaller than x
    int smallerThanX(int arr[],int n,int x)
    {
        // your code here
        int c=0;
        for(int i=0;i<n;++i){
            if(arr[i]<x){
                c++;
            }
        }
        return c;
    }
};
