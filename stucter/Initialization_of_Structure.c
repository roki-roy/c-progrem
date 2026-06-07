//Example - You will initialize student document

#include<stdio.h>
#include<string.h>

struct  persone
{
    char name[100];
    int homeNo;
    float bill;
};

int main() {
    struct persone s1 = {"Ratul", 144, 365.25};  // Initializing structure
    {
        printf("persone name = %s\t", s1.name);
        printf("home No = %d\t", s1.homeNo);
        printf("bill = %f", s1.bill);
    }
}
