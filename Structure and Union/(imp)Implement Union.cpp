struct NODE{
    double data;
    union{
        NODE *left,*right;
    };
};
