/*
flat bill counting per parsone->

formet->

. total flat vara
. total food cost fee
. electricity units spands
. charge par unit
. per parsone leving in room/flat
*/

#include<stdio.h>

int main(){
    float flat_vara, food_cost, electricity_unit_spend, charge_per_unit, persone_leving;
    printf("total flat vara : ");
    scanf("%f", &flat_vara);

    printf("per month total food costing : ");
    scanf("%f", &food_cost);

    printf("electricity unit spend per month : ");
    scanf("%f", &electricity_unit_spend);

    printf("electricity charge per units : ");
    scanf("%f", &charge_per_unit);

    printf("flat/room leving persone : ");
    scanf("%f", &persone_leving);

    float electricity_bell = electricity_unit_spend*charge_per_unit;

    float total_leving_cost = (flat_vara+food_cost+electricity_bell)/persone_leving;

    printf("%f \n", total_leving_cost);

    return 0;
}