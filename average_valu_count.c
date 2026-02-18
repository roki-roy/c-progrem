// print the average of 3 number

#include<stdio.h>

int main(){
    float a;
    float b;
    float c;
    printf("enter the number a : ");
    scanf("%f", &a);

    printf("enter the number b : ");
    scanf("%f", &b);

    printf("enter the number c : ");
    scanf("%f", &c);

    float avarag = (a+b+c)/3;

    printf("the avg valu = %f ", avarag);

    return 0;

}