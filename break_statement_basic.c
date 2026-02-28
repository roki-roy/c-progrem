//.. Example -> 

#include<stdio.h>

int main(){
    for (int i = 1; i <= 10; i++)
    {
        if (i==5) //..something enter number
        {
            break; //.. exit the loop
        }
        printf("%d \n", i);
        
    }
    
    printf("END");

    return 0;
}