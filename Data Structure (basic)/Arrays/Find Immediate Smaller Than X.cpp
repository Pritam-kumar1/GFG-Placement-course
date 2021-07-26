class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it. 
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int a;
        vector<int> ab;
        for(int i=0;i<n;++i){
            if(arr[i]<x){
                ab.push_back(arr[i]);
            }
        }
        if(ab.empty()){
            return -1;
        }
        a=*max_element(ab.begin(), ab.end());
        return a;
        
    }
};
