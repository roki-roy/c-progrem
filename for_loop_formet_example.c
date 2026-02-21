
/*
'for loop' Formet->

for(initialisation; condition; updation){

//something print

}

Example 1 -> 1 to 50 print
Example 2 -> 1.0 to 5.0 print
Example 3 -> A to Z print
*/


#include<stdio.h>

int main(){
    for (int i=1; i<=50; i +=1)
    {
        printf("%d \n", i);
    }

    for (float x=1.00; x<=5.00; x +=1)
    {
        printf("%f \n", x);
    }

    for (char ch='A'; ch<= 'Z'; ch+=1)
    {
        printf("%c \n", ch);
    }

    return 0;
    
}