// example pointer to function call by referance

#include<stdio.h>

void multiplication(int x);
void referance(int* x);

int main(){
    int x = 5;
    multiplication(x);
    printf("real value = %d\n", x);         // real value = 5

    referance(&x);
    printf("real value = %d\n", x);        // real value = 25

    return 0;
}

// Call by value

void multiplication(int x){
    x = x*x;
    printf("Multiplication is = %d\n", x);   // Multiplication is = 25
}

// call by Reference

void referance(int* x){
    *x = (*x)*(*x);
    printf("Multification is = %d\n", *x);  // Multiplication is = 25
} 