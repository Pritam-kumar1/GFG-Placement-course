class Solution{
    public:
    
    // Complete this function
    void interchange(vector<vector<int>>&arr, int r,int c)
    {
        // Your code here
        for(int i = 0 ; i < r ; i++){
for(int j = 0 ; j < c ; j++){
int t = arr[i][0];
arr[i][0]=arr[i][c-1];
arr[i][c-1] = t;

}
}
      
        
        // Printing the modified matrix
        for(int i=0;i<r;i++) { 
    	   for(int j=0;j<c;j++) {
        	   cout << arr[i][j] << " ";
            }
        	cout << endl;
    	}
    }
};
