/*
condition:- use typedef and structer input 3 persone information as id no, home no, district no, name-
then print information.
*/

#include<stdio.h>
#include<string.h>            // charecter Header file 

typedef struct pepole_identaty      // typedef and structer Initialized
{
    int idno;
    int homeno;
    char district[100];
    char name[80];
}pi;              // typedef initilize

void printidentaty(pi identaty);    // function creating


int main(){
    pi identaty[3];                          // three persones for array creating and input information
    printf("id, home no, district, name\n"); // Formal information declar

    printf("inter information for persone 1 = ");
    scanf("%d",&identaty[0].idno);
    scanf("%d",&identaty[0].homeno);
    scanf("%s",identaty[0].district);
    scanf("%s",identaty[0].name);


    printf("enter 2nd persone information = ");
    scanf("%d",&identaty[1].idno);
    scanf("%d",&identaty[1].homeno);
    scanf("%s",identaty[1].district);
    scanf("%s",identaty[1].name);


    printf("enter 3rd persone information = ");
    scanf("%d",&identaty[2].idno);
    scanf("%d",&identaty[2].homeno);
    scanf("%s",identaty[2].district);
    scanf("%s",identaty[2].name);

    printidentaty(identaty[0]);
    printidentaty(identaty[1]);
    printidentaty(identaty[2]);

    return 0;
}

void printidentaty(pi identaty){            // function call
    printf("identaty is : id: %d,home: %d,District: %s,name: %s\n", identaty.idno, identaty.homeno, identaty.district, identaty.name);
}  // inputed information print
