// 2D array - 

#include<stdio.h>

int main(){
    
    // example 2 persone 3 value count
    // 2 X 3

    int valu[2][3]; // ----|----
    valu[0][0] = 55;
    valu[0][1] = 85;
    valu[0][2] = 90;

    // second student marks

    valu[1][0] = 88;
    valu[1][1] = 33;
    valu[1][2] = 45;

    printf("value = %d \t", valu[0][1]);  // example

    printf("valu = %d", valu[1][1]);  // example

    return 0;
}