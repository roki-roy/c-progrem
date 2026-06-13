/*
file handel basic syntex - 

. File Pointer Declare as -

    FILE *fp     

. then file open. fopen("file_name", mode)
. file close (fclose) fclose()
. write, read, append ("w"), ("r"), ("a")
*/

#include<stdio.h>

int main(){
    FILE *fpter;                    // file alwes decler to pointer(*)

    fpter = fopen("test.txt","w");  // 'w' folder creat 
    fprintf(fpter, "Hello Bangladesh.");    // Store valu in folder
    fclose(fpter);                          // file close 


    fpter = fopen("test.txt", "r");    // read valus in folder
    char ch;                           // declear charecter typs, and stor valus
    ch = fgetc(fpter);                 // first charecter read as like H
    while (ch != EOF)                  // read valus as long as not come end of file
    {
        printf("%c", ch);          // stor charecter in ch. and full print - 'Hello Bangladesh'
        ch = fgetc(fpter);        // step by step chrecter reading
    }
    
    fclose(fpter);

    return 0;

}