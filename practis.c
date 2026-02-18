/*
=> write a progrem to check if given character is digit or not.

first->
. input a cheracter
. check a cheracter YES or NOT
*/

#include<stdio.h>

int main(){
    int cher;
    printf("Enter the cheracter = ");
    scanf("%d", &cher);

    if (cher>=0 && cher<=9){
        printf("It is a digit \n");
    }
    else{
        printf("It is not a digit");
    }

    return 0;
    
}