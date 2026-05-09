/*
formet :-
use recursion
.User Input randome number
.in this number will count factroial
.then print valu
*/

#include<stdio.h>

int factroial(int x);

int main(){
    int x;
    printf("enter random valu : ");
    scanf("%d", &x);

    int f = factroial(x);
    printf("The valu = %d", f);

    return 0;

}

int factroial(int x){
    if (x == 1)
    {
        return 1;
    }

    int fact = factroial(x-1);
    int fact2 = fact * x;
    
}