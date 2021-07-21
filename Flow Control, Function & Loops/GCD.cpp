int gcd(int a, int b){

    int max=0;
    //code here to calculate and return gcd of a and b
    for(int i=1;i<=min(a,b);++i)
    {
        if(a%i==0&&b%i==0)
        {
            max=i;
        }
    }
    return max;
    

        
}
