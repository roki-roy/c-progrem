/*
formet-

-> track light coller
-> green (g) light "Go now"
-> Yellow (y) light "Wait and see light"
-> Red (r) light "Stop"
*/

#include<stdio.h>

int main(){
    char light;
    printf("enput light coller = ");
    scanf("%c", &light);

    if (light == 'g') {
        printf("Go now");
    }
    else if (light == 'y')
    {
        printf("Wait and see light");
    }
    else if (light == 'r')
    {
        printf("Stop");
    }
    else{
        printf("the system broken");
    }
    
    return 0;
    
}