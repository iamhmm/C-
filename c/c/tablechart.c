#include<stdio.h>
int main ()
{
int a,b;
printf("Enter your choice\n");
scanf("%d",&a);
for (int i = 1; i <= 10; i++)
{
   for (int b = 1; b<=a; b++)
   {
     printf("%d\t",b*i);
   }
   printf("\n");
}


return 0;
}