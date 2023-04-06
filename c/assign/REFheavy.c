#include <stdio.h>

int main()
{
    int weights[10] = {10, 20, 30, 50, 80 , 130, 210 , 80, 90, 100};
    int i;  
    int heavy_weight[8];
    int n=0;
    int finalheavyweight;

    for (i = 2; i < 10; i++)
    {
        if (weights[i] == weights[i - 1] + weights[i - 2])
        {
            heavy_weight[n] = weights[i];
            printf("%d\t", heavy_weight[n]);
            n++;
        }
    }
finalheavyweight = heavy_weight[0];
   for (i=0 ; i<n; i++)
   {
    if (finalheavyweight<heavy_weight[i]);
    {
        finalheavyweight=heavy_weight[i];
    }
   }
   printf("\nthe heavy weight is %d", finalheavyweight);
    return 0;
}
