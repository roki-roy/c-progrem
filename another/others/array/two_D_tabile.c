/*
creating two D array 
creat a tabile 2,3 and 4.
*/

#include<stdio.h>

void printTabil(int arr[][10], int row, int cullam, int number);
// [10] 10 or any ather value is will always decler.

int main(){
    int valu[3][10];

    printTabil(valu, 0, 10, 2);
    printTabil(valu, 1, 10, 3);
    printTabil(valu, 2, 10, 4);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", valu[0][i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", valu[1][i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", valu[2][i]);
    }
    
    return 0;
}

void printTabil(int arr[][10], int row, int cullam, int number){
    for (int i = 0; i < cullam; i++)       // printing 1 to 10
    {
        arr[row][i] = number * (i+1);      // 2 4 6 8 10 ...
    }
    
}