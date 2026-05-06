/*
project formet for function :-

. sapuse input n randome number
. and print multiplication table 10 time
. step by stpe countinue and result prine

*/

#include<stdio.h>

void printTable(int n);

int main(){
    int n;
    printf("Enter the valu : ");
    scanf("%d", &n);

    printTable(n);

    return 0;

}

void printTable(int n){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i*n);
    }
    
    printf("COMPLET");
}