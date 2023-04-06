#include<stdio.h>
int main ()
{
    int a;
    int i;
    int b;
    for(a=1;a<=10;a++)
    {
        for (i=a;i<=10;i++)
        { 

             printf(" ");
        }
        for(b=1;b<=2*a-1;b++)
        {
             printf("*");
        }
        printf("\n");
    }
    return 0;
}