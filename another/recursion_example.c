/*
Formet :-

.USE recursion
.and input any random number and
.find Sum of first n natural number.

*/

#include<stdio.h>

int sumNumber(int n);

int main(){
    int n;
    printf("Input valu = ");
    scanf("%d", &n);

    int g = sumNumber(n);
    printf("the ans is = %d", g);

    return 0;

}

int sumNumber(int n){
    if (n == 1)
    {
        return 1;
    }
    
    int nom1 = sumNumber(n-1);
    int nom2 = nom1 +n;
    return nom2;
}