class Solution{
public:
    int maxValue(int A, int B){
        // code here
        vector<int> v;
        try{
            if(B==0){
                throw 0;
            }
            v.push_back(A+B);
            v.push_back(A-B);
            v.push_back(A/B);
            v.push_back(A*B);
            return *max_element(v.begin(),v.end());
        }
        catch(int i){
            return -999999;
        }
    }
};
