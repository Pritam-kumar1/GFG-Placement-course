class CollegeCourse
{
    //your code here
    private:
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    float honorPoints;
    public:
    void set_CourseId(string CID)
    {
        courseID=CID;
    }
    void set_Grade(char g)
    {
        grade=g;
    }
    void set_Credit(int cr)
    {
        credits=cr;
    }
    int calculateGradePoints(char g)
    {
        if(g=='A' || g=='a')
        {
            gradePoints=10;
            
        }
        else if(g=='B'|| g=='b')
        {
            gradePoints=9;
            
        }
        else if(g=='C'|| g=='c')
        {
            gradePoints=8;
            
        }
        else if(g=='D'|| g=='d')
        {
            gradePoints=7;
            
        }
        else if(g=='E'|| g=='e')
        {
            gradePoints=6;
            
        }
        else if(g=='F'|| g=='f')
        {
            gradePoints=5;
        }
        return gradePoints;
    }
    float calculateHonorPoints(int gp,int cr)
    {
        honorPoints=gradePoints*credits;
        return honorPoints;
    }
    void display()
    {
        cout<<gradePoints<<" "<<honorPoints<<endl;
    }
    
    
};
