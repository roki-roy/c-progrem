/*
Formet :-
use function and find Fahrenheit;

. input temperature
. convert fahrenheit
*/

#include<stdio.h>

float temperature(float celsius);

int main(){
    float celsius;
    printf("inter celsius = ");
    scanf("%f", &celsius);

    float far = temperature(celsius);
    printf("fahrenheit = %f", far);

    return 0;
}

float temperature(float celsius){
    float far = celsius*(9.0/5.0)+32;
    return far;
}