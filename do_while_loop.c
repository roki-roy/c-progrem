/*
sentex ->

do{

// do somthing

} while(condition);

*/

// Example -> Print the number n, if n input the user.

#include<stdio.h>

int main(){
    int n;
    printf("Enter your valu: ");
    scanf("%d", &n);
    
    int i =0;
    do
    {
        printf("%d \n", i);
        i++;
    } while (i<=n);
    
}