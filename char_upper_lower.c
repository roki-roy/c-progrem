/*
Formet ->

=> user input a Alphabet
=> check alphabet upper and lower
=> if written in large.print upper case
=> if written in small.print lower case
=> and if alphabet doesn't write.print it's not alphabet.
*/

#include<stdio.h>

int main(){
    char ch;
    printf("Enter char alphabet = ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case");
    } else if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case");
    }
    else{
        printf("It's not a alphabet");
    }

    return 0;
    
}