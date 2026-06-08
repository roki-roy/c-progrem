// '->' arrow syntex
// pointer to arrow initialize

#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[50];
};

int main(){
    struct student s1 = {101,"Rocky"};

    struct student *ptr = &s1;       // pointer Initialize
    {
        printf("student id = %d\t", (*ptr).id);   // pointer to id print

        printf("student name = %s\t", ptr->name);    // '->' arrow initialize and name print
        printf("student id = %d\t", ptr->id);    // arrow(->) to id print101
    };
    
    
}

