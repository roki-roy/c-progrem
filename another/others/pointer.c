/*
.. pointer basic simtex algaridam
*/

#include<stdio.h>

int main(){

    int i;
    int *ptr;

    ptr = &i;
    *ptr = 11;

    printf("i = %d\n", i);           // i = 11
    printf("*ptr = %d\n", *ptr);     // *ptr = 11

    *ptr = *ptr+5;
    printf("i = %d\n", i);          // i = 16
    printf("*ptr = %d\n", *ptr);    // *ptr = 16

    (*ptr)++;
    printf("i : %d\n", i);         // i : 17
    printf("*ptr : %d", *ptr);     // *ptr : 17

    return 0;
}