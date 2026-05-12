/*
formate :-
...use function
.input marks for math,physics,Chemistry Add English
.count average valu
*/

#include<stdio.h>

float averageValu(float math, float physics,
     float chemistry, float english);

     int main(){
        float math, physics, chemistry, english;
        printf("math mark = ");
        scanf("%f", &math);

        printf("physics mark = ");
        scanf("%f", &physics);

        printf("chemistry mark = ");
        scanf("%f", &chemistry);

        printf("english mark = ");
        scanf("%f", &english);

        float ave = averageValu(math,physics,chemistry,english);
        printf("the average valu : %f", ave);

        return 0;
     }

     float averageValu(float math, float physics,
    float chemistry, float english){
        float ave = (math+physics+chemistry+english)/4;
        return ave;
        
    }