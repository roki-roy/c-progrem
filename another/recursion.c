/*
Example Formet :-

USE Recursion function and print 'Hello Bangladesh' 10 time.

*/

#include<stdio.h>

void printBn(int count);

int main(){
    printBn(10);

    return 0;
}

void printBn(int count){       // Recursive function
    if (count == 0)
    {
        return;
    }
    
    printf("Hellow Bangladesh\n");
    printBn(count-1);
}