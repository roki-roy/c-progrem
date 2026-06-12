/*
condition :-

Calculate two victors number sum
*/

#include<stdio.h>

struct vactor_calculation          // structer
{
    int x;                  // vactor x axis
    int y;                  // vactor y axis
};

void vactorsum(struct vactor_calculation v1, struct vactor_calculation v2, struct vactor_calculation sum);   // function 

int main(){
    struct vactor_calculation v1 = {5,8};         // user input example, first vactor x = 5, y = 8
    struct vactor_calculation v2 = {6,8};         // user input example, second vactor x = 6, y = 8
    struct vactor_calculation sum = {0};

    vactorsum(v1,v2,sum);                      // function call
    return 0;
}

// crecating function defination

void vactorsum(struct vactor_calculation v1, struct vactor_calculation v2, struct vactor_calculation sum){
    v1.x = v1.x+v2.x;                 // v1 x = 5 + v2 x = 6
    v2.y = v1.y+v2.y;                 // v2 x = 8 + v2 x = 8

    printf("sum of x = %d\t",v1.x);    // 5+6 = 11

    printf("sum of i = %d\t", v2.y);   // 8+8 = 16

}