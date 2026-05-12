/*

formet :-
use function and count fibonacci number count

F(n) = F(n-1) + F(n-2)

..inter a aumber n
..print fib number

*/

#include<stdio.h>

int fibonacci(int n);

int main(){

    int n;
    printf("inter number : ");
    scanf("%d", &n);

    int fibo = fibonacci(n);
    printf("the fibonacci number = %d", fibo);   //input number valu have to fibonacci Formula 

    return 0;

}

int fibonacci(int n){
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }
    
    
    int num1 = fibonacci(n-1);
    int num2 = fibonacci(n-2);
    int sum = num1+num2;
    return sum;

}