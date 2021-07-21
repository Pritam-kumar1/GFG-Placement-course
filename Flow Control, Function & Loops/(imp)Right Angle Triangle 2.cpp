void triangle(int s){
        
    //Write your code here
    for(int i = 1; i <= s; i++)
    {
        if(i == s)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            
            cout << endl;
            
            break;
        }
        
        for(int j = 1; j <= i; j++)
        {
            if(j == 1)
            {
                cout << "* ";
            }
            else if(j == i)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
        
}
