/*
fgets(str, n, file_name)
Different different file name as - 

stdin - Standard input (kebord)
stdout - Standard output (screen)
stderr - Standard Error (Error messages)

puts(str)  showing output string 
*/


#include<stdio.h>

int main(){
    char str[100];
    fgets(str, 100, stdin);    // Multiple string word input
    puts(str);                 // multiple string word showing

    return 0;
}