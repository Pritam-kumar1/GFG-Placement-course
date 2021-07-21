void countDigits(int n){

    //write your code here
    //print number of digits in n
    int cnt=0;
    while(n!=0){
        n/=10;
        cnt++;
    }
    cout<<cnt;
}
