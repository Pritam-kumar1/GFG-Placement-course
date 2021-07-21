void invTriangleWall(int s){
    
    //Write your code here
    for(int i=0;i<s;++i)
    {
        for(int j=s-1;j>=i;--j)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
