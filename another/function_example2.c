/*
Project Formet for Function - 

. input randome tow numbers
. calculate the sum
. and final result print

*/

#include<stdio.h>

int number(int x, int y);

int main(){
    int x,y;
    printf("Enter the first number : ");
    scanf("%d", &x);

    printf("Enter the second number : ");
    scanf("%d", &y);

    int z = number(x,y);
    printf("final result is : %d", z);

    return 0;

}

int number(int x, int y){
    return (x+y);
}