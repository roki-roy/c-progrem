
/*
standard laibari function 

strlen();
strcpy();
strcpm();
strcat();
*/

#include <stdio.h>
#include <string.h>

int main() {

    char a[50] = "Hello";
    char b[] = " World";
    char c[50];

    printf("Length = %d\n", strlen(a));    // printing 5

    strcpy(c, a);
    printf("Copy = %s\n", c);             //  coping a valu in c

    printf("Compare = %d\n", strcmp(a, c)); // strcmp compeiring function, output = 0

    strcat(a, b);
    printf("Join = %s\n", a);             // join char, print = Hellow World

    return 0;
}