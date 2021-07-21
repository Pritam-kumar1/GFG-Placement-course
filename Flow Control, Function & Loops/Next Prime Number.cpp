bool  isprime(int a)
{
    for(int i=2;i<a;++i)
    {
        if(a%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int nextPrime(int n){
      
        
    //code here to find next prime number
    //return next prime number
    int a=n+1;
    while(true){
        if(isprime(a))
        {
            return a;
        }
        a++;
    }
   
    
}
