#include<stdio.h>
int main ()
{
    int n[] = {1, 2, 3};
    int p; // current pin
    int i;
    A:
    printf("Enter your pin:");
    scanf("%d", &p);
    /*for (i = 0; i <= 2; i++)
    {
        if (p ==n[i])
        {
        
             printf("ENTER A VALID PIN\n ");
          
        }
    
    }*/
    while (p!=n[i]) ;
    i++;
    goto A;

    

    
    return 0;
}