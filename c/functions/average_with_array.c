#include <stdio.h>
float avg(int a[5], int b[5], int c[5]);
int main()
{
    int a[5], b[5], c[5];
    printf(" Enter the marks for MATHS\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d : \n", i + 1);
        scanf("%d", &a[i]);
    }

    printf(" Enter the marks for Science\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d : \n", i + 1);
        scanf("%d", &b[i]);
    }
    printf(" Enter the marks for C\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d : \n", i + 1);
        scanf("%d", &c[i]);
    }

     float AVG[5];
    for (int i = 0; i < 5; i++)
    {
        AVG[i] = avg(a[i], b[i], c[i]);
        printf(" The average of  the numbers %d  , %d , %d is = %d", a, b, c, AVG);
    }

    return 0;
}

float avg(int a[5], int b[5], int c[5])
{
    float result[5];
    for (int i = 0; i < 5; i++)
    {
        result[i]= (float) (a[i]+b[i]+c[i])/3;
    return result[i];
    }
  
}
