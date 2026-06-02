// write a program -
// user input string word and output will show string without spece int number.

#include<stdio.h>

int number(char arr[]);

int main(){
    char name[100];
    printf("enter word = ");
    fgets(name, 100, stdin);
    int result = number(name);
    printf("the str word num(with out space) is = %d", result);
    return 0;
}

int number(char arr[]){
    int count =0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] != ' ' && arr[i] != '\n')   // Without space counting string number
        {
            count++;
        }
        
    }
    return count;
}