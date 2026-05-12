//..Using function
//.hot or cold temperature Detecting Calculator

#include<stdio.h>

void hotCold(float n);

int main(){
    float n;

    printf("Enter temperature = ");
    scanf("%f", &n);

    if (n<=25.00)
    {
        hotCold(n);
    }
    else if (n>=25.00 && n<=40.00)
    {
        printf("'Hot' Temperature");
    }
    else
    {
        printf("this is very 'Hot' temperature");
    }
    
    
    return 0;
}

void hotCold(float n){
    printf("'Cold' temperature");
}