/*
Formet ->

initialisatio
while('condition'){
// do somthing
updation;

}
*/

#include<stdio.h>

int main(){

    int c;
    printf("enter valu = ");
    scanf("%d", &c);
    
    int i=0;
    while (i<=c)
    {
        printf("%d \n", i);
        i++;
    }
    
}