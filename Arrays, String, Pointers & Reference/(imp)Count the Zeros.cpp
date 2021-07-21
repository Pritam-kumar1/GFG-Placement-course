class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int i=0;
        while(arr[i]!=0)
        {
            if(arr[i]==0)
            {
                break;
            }
            i++;
        }
        return n-i;
    }
};
