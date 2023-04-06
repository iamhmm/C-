#include <stdio.h>
int main()
{
    int n = 100, i, j, sum = 0;
    int sum1;
    for (i = 1; i <= n; i++)
    {

        sum = j + i;
        j = sum;
    }

    printf("Sum=%d\n", sum);
   
    sum1 = n* (n+1)/2;
    printf("sum1= %d", sum1);

    return 0;
}