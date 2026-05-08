/*
Example Formet :- 

Use Functio and
Show valuse Step by Step for
.Suqare,
.Trangle,
.Circle,
.Trapezium

*/

#include<stdio.h>    
#include<math.h>      // math calculation Library Header file 

void katrofal(float a);
float aytokatro(float x, float y);
float squar(float r);
float trapezium(float b, float c, float h);

int main(){
   float a;
   printf("Area of Square\n");
   printf("enter valu = ");
   scanf("%f", &a);

   katrofal(a);

   float x,y;
   printf("Area of a Trangle\n");
   printf("Enter lenth = ");
   scanf("%f", &x);

   printf("Enter wide = ");
   scanf("%f", &y);

   float s = aytokatro(x, y);
   printf("the final result = %f\n", s);

   float r;
   printf("Area of a Circle\n");
   printf("Enter squar valu = ");
   scanf("%f", &r);
   
   float square = squar(r);
   printf("the final result is = %f\n", square);

   float b, c,h;
   printf("Area of a Trapeziem\n");
   printf("enter valu area = ");
   scanf("%f", &b);

   printf("Enter valu length =");
   scanf("%f", &c);

   printf("Entre valu Hight = ");
   scanf("%f", &h);

   float g = trapezium(b, c, h);
   printf("the final result = %f", g);

   return 0;
}

void katrofal(float a){
    printf("katrafal = %f\n", pow(a,2));
}

float aytokatro(float x, float y){
    return 0.5*(x*y);
}

float squar(float r){
    return 3.1416*pow(r,2);
}

float trapezium(float b, float c, float h){
    printf("TASK COMPLET\n");
    return 0.5*(b+c)*h;
}