/*
formet:-

. firstly user input a int number
. then, creat a loop condition
. then, give loop comand
. then, inputed number and loop condition multification
. final result print

*/

#include<stdio.h>

int main(){
    int num;
    printf("enter your number = ");
    scanf("%d", &num);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d \n", i*num);
    }
    return 0;
}