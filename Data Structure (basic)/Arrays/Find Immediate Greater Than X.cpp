class Solution{
  public:
    int immediateGreater(int arr[], int n, int x){
        int a;
        vector<int> ab;
        for(int i=0;i<n;++i){
            if(arr[i]>x){
                ab.push_back(arr[i]);
            }
        }
        if(ab.empty()){
            return -1;
        }
        a=*min_element(ab.begin(), ab.end());
        return a;
    }
};
