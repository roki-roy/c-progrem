/*
program fortmet:-

.. Interchance value a and b

.... a = 10, b = 20
.... a = 20, b = 10

*/

#include<stdio.h>

void swap(int a, int b);
void swapValue(int *a, int *b);

int main(){
    int a = 10, b = 20;
    printf("a = %d & b = %d\n", a,b);
    swapValue(&a, &b);                    // call Reference Prototype
    printf("a = %d and b = %d\n", a,b);

    return 0;
}

// call by referance

void swapValue(int *a, int *b){
    int t = *a;                  // *a = 10 Store the valu in t
    *a = *b;                     // *b = 20 stor the valu in *a
    *b = t;                      //  t = 10 stor the valu in *b
}