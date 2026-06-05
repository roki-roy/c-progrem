// stucter function example

#include<stdio.h>
#include<string.h>   // string printing hedar file

struct persone_detail     // structer formet
{
    int nid;
    float bill;
    char name[100];
};

int main(){
    struct persone_detail s1;    // structer coll
    {
        s1.nid = 123456;
        s1.bill = 144.1545;
        strcpy(s1.name, "Rocky Roy");   // when string display use strcpy()
    };

    printf("Persone name = %s\n", s1.name);
    printf("Persone nid number = %d\n", s1.nid);
    printf("Persone bill = %f", s1.bill);

    return 0;
    
}
