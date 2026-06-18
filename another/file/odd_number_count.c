// use fil then -
// user input random number and Find odd number.

#include<stdio.h>

int main(){
    FILE*fptr;

    fptr = fopen("odd_number.txt", "w");   // creat odd number file

    int n;
    printf("enter valu = ");          // user valu input, Suppose input 15
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf( fptr, "%d\n", i);      // result stor in fptr file
        }
        
    }
    
}