#include<stdio.h>
int main ()
{
int n,f  ;
printf("enter an integer");
scanf("%d",&n);
for (int i = n-1; i >=1; i--)
{
    f=n*i;
    n=f;
}
printf(" the factorial is %d ",f);
return 0;
} 