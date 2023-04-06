#include<stdio.h>
int main()
{
int n;
int i;
int f;
printf("Enter any Number\n");
scanf("%d",&n);
for (i=n-1;i>=1;i--)
{
f=n*i;
n=f;
}
printf("Factorial is %d",f);
    return 0;
}




