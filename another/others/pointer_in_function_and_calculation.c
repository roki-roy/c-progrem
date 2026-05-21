/*
... use pointer function,
Write a function to calculate the sum, product, and average value of 2 numbernumber.

.. user input i and x valu. 
*/

#include<stdio.h>

void calculation(int i, int x, int *sum, int *product, int *average );

int main(){
    int i, x;

    printf("inter first value = ");
    scanf("%d", &i);

    printf("inter second value = ");
    scanf("%d", &x);

    int sum, product, average;

    calculation(i,x, &sum, &product, &average);
    printf("sum = %d, product = %d, average = %d",sum, product, average);

    return 0;

}

void calculation(int i, int x, int *sum, int *product, int *average){
    *sum = i + x;
    *product = i*x;
    *average = (i+x)/2;
}