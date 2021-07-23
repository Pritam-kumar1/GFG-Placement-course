class test: public student 
{
    // Add set_marks() method here.
    public:
    float marks[5];
    void set_marks(float m[5])
    {
        for(int i=0;i<5;++i)
        {
            marks[i]=m[i];
        }
    }
};

class result: public test
{
    // Add display() method here.
    public:
    int sum=0,avg;
    void display()
    {
        for(int i=0;i<5;++i)
        {
            sum+=marks[i];
        }
        avg=sum/5;
        cout<<roll_number<<" "<<sum<<" "<<avg<<endl;
    }
};
