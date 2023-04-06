#include<stdio.h>
int main (){
float p;
float t;
float r;
float I= ( p * t * r ) / 100;
printf("Enter the principal(p) amount \n");
scanf("%f",&p);
printf("Enter the time(t) amount \n");
scanf("%f",&t);
printf("Enter the rate(r) amount \n");
scanf("%f",&r);
printf("the simple interest is %f \n",I);
return 0;
}
