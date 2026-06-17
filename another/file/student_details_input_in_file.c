/*
. stor studen details in file as roll,cgpa,name.
*/

#include<stdio.h>

int main(){
    FILE*fptr;                       // file decler

    fptr = fopen("stu.txt", "w");       // new file creation

    int roll;
    float cgpa;
    char name[50];

    printf("Enter roll : ");
    scanf("%d", &roll);            // input roll

    printf("Enter CGPA : ");
    scanf("%f", &cgpa);        // input cgpa

    printf("Enter Name : ");
    scanf(" %[^\n]", name);     // input full name, when want full name use " %[^\n]"

    fprintf(fptr, "%d\n", roll);
    fprintf(fptr, "%f\n", cgpa);
    fprintf(fptr, "%s", name);

    fclose(fptr);

    return 0;


}