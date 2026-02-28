/*
Formet->

. user input number
. will search untill the user inputs an odd number.
. When odd number enter.
. print OK Done.
*/

#include<stdio.h>

int main(){
    int x;
    do
    {
        printf("Enter your number : ");
        scanf("%d", &x);
        printf("%d \n", x);

        if (x % 2 != 0)
        {
            break;
        }
        
        
    } while (1);

    printf("OK Done");
    
}