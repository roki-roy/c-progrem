
// user input string line, and finding vowels items.
// a e i o u  
#include<stdio.h>

int countVolwel(char str[]);

int main(){
    char str[100];
    printf("Enter value = ");
    fgets(str, 100, stdin);         // input valu

    printf("the vowels item is = %d\n", countVolwel(str));

    return 0;
}

int countVolwel(char str[]){
    int count = 0;

    for (int i = 0; str[i] ; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o' || str[i] == 'u')

                     // vowels items (a, e, i, o, u)
        {
            count++;
        }
    }
    return count;
}