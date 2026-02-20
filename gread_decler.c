#include<stdio.h>

int main(){
    int number;
    printf("enter numb = ");
    scanf("%d", &number);

    if (number >= 100)
    {
        printf("Gread = A+");
    }
    else if (number >= 80 && number <= 100)
    {
        printf("Gread = A");
    }
    else if (number >= 60 && number <= 80)
    {
        printf("Gread = B");
    }
    else if (number >= 40 && number <= 60)
    {
        printf("Gread = C");
    }
    else if (number >= 20 && number <= 40)
    {
        printf("Gread = D");
    }
    else {
        printf("You are Faill");
    }
    
}