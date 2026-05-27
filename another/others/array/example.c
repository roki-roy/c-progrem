
// Array as Function Argument

#include<stdio.h>

void mathode(int value[], int n);

int main(){

    int value[] = {12, 13, 14, 16, 17};

    mathode(value, 5);

    return 0;

}

void mathode(int value[], int n){

    for (int i = 0; i < n; i++)
    {
        printf("the value is = %d \t", value[i]);
    }
    
}