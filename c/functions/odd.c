// with argument and no return type
#include <stdio.h>
void odd_even(int);
int main()
{
    int a;
    printf("ENTER AN NUMBER :      \n ");
    scanf("%d",& a);
    odd_even(a);
    return 0;
}
 
 void odd_even (int x)
 {
    if (x%2== 0)
    {
        printf(" THE GIVEN NUMBER %d IS EVEN ", x );
    }
    else
    {
         printf(" THE GIVEN NUMBER %d IS ODD ", x );
    }
 }