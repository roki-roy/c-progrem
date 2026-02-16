/*
=> A number is greater then 10 and less then or equal to 100
=> print 1 (true) 
*/ 

#include<stdio.h>

int main(){

    int x;
    printf("Enter a number = ");
    scanf("%d", &x);
    printf("%d", 10<x && x<=100);

    return 0;
}