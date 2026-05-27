/*
formet - 
.. use array function,
Write a program, and find odd number.
*/

#include<stdio.h>

int valu(int number[], int n);

int main(){
    int number[] = {2,3,4,5,6,7};
    int z = valu(number, 6);
    printf("the odd item is = %d", z);
    return 0;
}

int valu(int number[], int n){
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (number[i] %2 != 0)  // count item of odd number
        {
            count++;
        }
        
    }
    return count;
}