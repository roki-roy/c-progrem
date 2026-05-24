/*
using array -
user input 3 subjects total  as markes - 
.. physics
.. chamestry &
.. math

... 3 subjects count total markes and count average valu in 3 number
*/

#include<stdio.h>

int main(){
    int markes[3];                               // [] this array syntex

    printf("Enter chy mark = ");
    scanf("%d", &markes[0]);                     // input array. array Always start zero [0] value.                  

    printf("Enter chem number = ");
    scanf("%d", &markes[1]);                     // Second subject number input

    printf("Enter math number = ");
    scanf("%d", &markes[2]);                     // 3rd subject number input

    printf("Physics = %d, Chamestry = %d, Math = %d\n", markes[0], markes[1], markes[2]);

    int totalMark = markes[0]+markes[1]+markes[2];
    printf("total mark is = %d\n", totalMark);

    int ave = (markes[0]+markes[1]+markes[2])/2;
    printf("the average valu is = %d", ave);

    return 0;

}