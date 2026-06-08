// typedef example
// When want a nickname then use typedef

#include<stdio.h>
#include<string.h>

typedef struct electronics_and_Communication
{
    int sesion;
    char name[50];
}ec;              // typedef Initialize

int main(){
    ec s1;       // Electronics_and_communication Convert to 'ec'
    {
        s1.sesion = 2026;
        strcpy(s1.name, "Rocky Roy");   // srring print stucter
    };

    printf("sesion = %d\t", s1.sesion);    // sesion = 2026
    printf("name = %s\t", s1.name);        // name = Rocky Roy
    
}