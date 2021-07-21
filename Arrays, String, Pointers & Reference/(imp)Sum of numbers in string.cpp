class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int sum =0;
    	string temp="";
    	for(int i=0;i<str.length();++i){
    	    char ch=str[i];
    	    if(isdigit(ch))
    	    {
    	        temp+=ch;
    	    }
    	    else
    	    {
    	        sum+=atoi(temp.c_str());
    	        temp="";
    	    }
    	}
    	return sum+atoi(temp.c_str());
    	
    }
};