void swap(int *A, int *B){
    
    // Your code here
    int x=*A;
    *A=*B;
    *B=x;
    
    
    
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
  
    // Your code here
    int x=A;
    A=B;
    B=x;
  
}
