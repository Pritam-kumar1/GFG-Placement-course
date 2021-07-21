bool prime(int n){
    
    //Write your code here
    //returns a boolean value 
    if(n==1||n==0)
    return false;
    for(int i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
    
}
