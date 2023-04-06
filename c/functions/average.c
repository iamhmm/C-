#include<stdio.h>
float avg(int a ,int b, int c  );
int main ()
{
    int a , b , c ; 
    printf(" Enter the 3 numbers");
    scanf("%d%d%d", &a,&b,&c);
    int AVG ;
    AVG = avg(a, b, c);
    printf(" The average of  the numbers %d  , %d , %d is = %d", a, b,c , AVG);




return 0;
}

float  avg (int a , int b , int c )
{
   int result;
   result= (float) (a+b+c)/3;
   return result;
}