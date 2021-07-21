bool isprime(int a)
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
void printPrimeFactorization(int n)
{
    // code here
    for(int i=2;i<=n;++i)
    {
        int a=i;
        while(true)
        {
            if(isprime(i)&&n%a==0)
            {
                cout<<i<<" ";
                a=i*a;
            }
            else
            {
                break;
            }
            
            
        }
    }
    
    
    
}
