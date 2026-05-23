/*
formet :-

.. user input 2 number and find max number
.. and use pointer.

*/

#include<stdio.h>

void findMaxNum(int *a, int *b, int *max);

int main(){

    int i, x, max;
    printf("Enter first number 'a' = ");
    scanf("%d", &i);

    printf("Enter second number 'b' = ");
    scanf("%d", &x);

    findMaxNum(&i, &x, &max);

    printf("%d", max);

    return 0;

}

void findMaxNum(int *a, int *b, int *max){

    if (*a > *b)
    {
        *max = *a;
        printf("the max number 'a' = ");
    }
    else if (*b > *a)
    {
        *max = *b;
        printf("the max number 'b' = ");
    }
    else if (*a == *b)
    {
        *max = *a,*b;
        printf(" Both numbers is same\n");
    }
    else
    {
        printf("rong sentix");
    }
    
    
    
}