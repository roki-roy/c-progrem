// string basic sentix
// char str[] = "something"; string declaration
// %s string formet specifire

// Ask the user to enter their Name and print back to them.

#include<stdio.h>

int main(){
    char name[50];
    printf("Enter name = ");
    scanf("%s", name);                  // & Optional in string
    printf("the name is = %s", name);
    
    return 0;
}