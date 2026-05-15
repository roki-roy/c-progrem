// example pointer to function

#include<stdio.h>

void multiplication(int x);

int main(){
    int x = 5;
    multiplication(x);
    printf("real value = %d\n", x);         // real value = 5

    return 0;
}

// Call by value

void multiplication(int x){
    x = x*x;
    printf("Multiplication is = %d\n", x);   // Multiplication is = 25
}

