#include<stdio.h>
void sum (int * , int *); // DECLEARING FUNCTION 
int main ()
{
int x = 4 ;
int y = 7 ;
sum (&x,&y);
printf(" \n THE VALUES IN MAIN FUNCTION ARE x=%d , y=%d ", x , y);
return 0;
}

void sum (int *a , int *b)
{
    *a = 1000;
    *b = 2000 ;
    printf( " THE SUM IS %d ", *a + *b);
    printf(" THE VALUE FOR CALCULLATION WERE x= %d , y= %d ",*a , *b );
} 