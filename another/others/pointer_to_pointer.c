// print the value of 'valu' from its pointer to pointer.

#include<stdio.h>

int main(){
    int valu = 100;
    int *ptr = &valu;  // pointer (*) syntex
    int **pptr = &ptr; // pointer to pointer (**) syntex
    
    printf("**pptr = %d\n", **pptr);  // **pptr = 100

    return 0;
}