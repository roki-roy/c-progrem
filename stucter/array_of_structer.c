
// example 

// use arry and print maltipal student datils

#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student ece[3];         // example 3 student details
    {
        ece[0].roll = 603411;
        ece[0].cgpa = 3.86;
        strcpy(ece[0].name, "Marvel");
    };

    printf("srudent roll = %d\t", ece[0].roll);
    printf("srudent cgpa = %f\t", ece[0].cgpa);
    printf("srudent name = %s\t", ece[0].name);

    printf("\n");
    
    {
        ece[1].roll = 15482;
        ece[1].cgpa = 3.50;
        strcpy(ece[1].name, "Alex");
    };

    printf("srudent roll = %d\t", ece[1].roll);
    printf("srudent cgpa = %f\t", ece[1].cgpa);
    printf("srudent name = %s\t", ece[1].name);

    printf("\n");

    {
        ece[2].roll = 254784;
        ece[2].cgpa = 7.50;
        strcpy(ece[2].name, "Metra");
    };

    printf("srudent roll = %d\t", ece[2].roll);
    printf("srudent cgpa = %f\t", ece[2].cgpa);
    printf("srudent name = %s\t", ece[2].name);
}