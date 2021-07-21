int findMax(struct Height arr[], int n)
{
    // Code here
    int max=INT_MIN;
    for(int i=0;i<n;++i){
        if(((arr[i].feet*12)+arr[i].inches)>max)
        {
            max=(arr[i].feet*12)+arr[i].inches;
        }
    }
    return max;
}
