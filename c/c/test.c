#include<stdio.h>
int main () 
{
    int n[3]={1,2,3}, p;
    int i ;  

    printf("Enter any value:");
    scanf("%d",&p);
    for (i=0; i<=2 ; i++)
    {
    if(p==n[i])
    {
        printf("You can access now");
    }
    }

return 0;
}