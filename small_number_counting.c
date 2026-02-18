/*
=> inter the three number and count a small number.

. input three number.
. condetionaly check the small number.
*/

#include<stdio.h>

int main(){
    int first_number, second_number, third_number;
    printf("Input the first number : ");
    scanf("%d", &first_number);

    printf("Input the second number : ");
    scanf("%d", &second_number);

    printf("Input the third number : ");
    scanf("%d", &third_number);
    
    int smallest = first_number;

    if (second_number<smallest){
        smallest = second_number;
    }

    if (third_number<smallest)
    {
        smallest = third_number;
    }
    
    printf("The smallest number : %d", smallest);
}