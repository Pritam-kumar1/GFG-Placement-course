void reverseArray(int arr[], int n) {
    // Your code here
    int c;
    for(int i=0;i<n/2;++i)
    {
        c=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=c;
    }
}
