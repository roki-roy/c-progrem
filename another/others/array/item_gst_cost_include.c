/*
problem - 

Write a program to enter 3 items
print their final cost with VAT.

.. item is = Bag, Hadephone, Kebord

... Every product VAT is 18% include
*/

#include<stdio.h>

int main(){
    float itemes[3];

    printf("bag Price = ");
    scanf("%f", &itemes[0]);

    printf("Hadephone price = ");
    scanf("%f", &itemes[1]);

    printf("Kebord price = ");
    scanf("%f", &itemes[2]);

    // after including VAT 18%

    printf("bag price with VAT = %f\n", itemes[0]+(0.18*itemes[0]));
    printf("Hadephone price with VAT = %f\n", itemes[1]+(0.18*itemes[1]));
    printf("Kebord price with VAT = %f\n", itemes[2]+(0.18*itemes[2]));


    return 0;
}