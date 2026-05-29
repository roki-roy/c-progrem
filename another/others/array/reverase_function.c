/*
formet

.. use arr and 
.. print revers valu.

*** (n-i-1) most important formet when revers value print.
*/

#include<stdio.h>

void revers(int arr[], int n);
void printValu(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6};    // n = 6 contant Always run this code
    revers(arr, 6);
    printValu(arr, 6);
    return 0;
}

void revers(int arr[], int n){
    for (int i = 0; i < n/2; i++)   // 1 2 3 | 4 5 6 flow devide point n/2
    {
        int firstValu = arr[i];
        int secondValu = arr[n-i-1]; // n-i-1 revers valu formet, n constant.examp this code constant valu is n=6
        arr[i] = secondValu;
        arr[n-i-1] = firstValu;
    }
    
}

void printValu(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}