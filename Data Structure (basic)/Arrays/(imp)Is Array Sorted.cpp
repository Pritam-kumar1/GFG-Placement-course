class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
        bool flgDec=true,flgInc=true;
      for(int i=1;i<n;++i)
      {
          if(arr[i-1]>=arr[i])
          {
              flgDec=true;
          }
          else 
          {
              flgDec=false;
              break;
          }
        
      }
      //cout<<flgDec<<" ";
      for(int i=1;i<n;++i)
      {
          if(arr[i-1]<=arr[i])
          {
              flgInc=true;
          }
          else 
          {
              flgInc=false;
              break;
          }
        
      }
      //cout<<flgInc<<" ";
      if(flgInc||flgDec)
      {
          return 1;
      }
      else
      {
          return 0;
      }
      //Your code here
       
    }
};
