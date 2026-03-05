/*
formet:
. user input remdom number,
. then, that number factorial print,
. pless inter small number then this program work.
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factrioal is = %d \n", fact);
    printf("Program finished");

    return 0;
}