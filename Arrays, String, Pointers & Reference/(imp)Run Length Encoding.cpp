string encode(string src)
{     
    int a=0;
    string str="";
    for(int i=0;i<src.length()+1;++i)
    {
        if(a==0)
        {
            str+=src[i];
            a++;
        }
        else if(src[i]==src[i-1])
        {
            a++;
        }
        else 
        {
            str+=to_string(a);
            a=1;
            str+=src[i];
            
        }
    }
    return str;
  //Your code here 
}     