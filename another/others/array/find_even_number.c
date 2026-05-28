#include<stdio.h>

int evenNumber(int valu[], int n);

int main(){

    int valu[] = {1,2,2,4,5};
    int x = evenNumber(valu,5);
    printf("even items is = %d", x);
    return 0;

}

int evenNumber(int valu[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (valu[i] %2 == 0)  // even number finding
        {
            count++;
        }
        
    }
    return count;
}