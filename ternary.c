/*
-> Ternary operator sentex
   
    condition ? do Something if True : do Something if False;
*/

// Example :

#include<stdio.h>

int main(){
    int age;
    printf("Your age : ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult \n") : printf("Not adult");

    return 0;
}