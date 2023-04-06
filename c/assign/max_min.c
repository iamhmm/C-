#include <stdio.h>
int main()
{
    int P[8] = {33, 35, 28, 36, 39, 25, 22, 31};
    int BS, BB; // BB = best buy = min  ,  BS = best sell = max
    BS = P[0];
    BB = P[0];
    for (int i = 1; i < 7; i++)
    {
        if (P[0] < P[i])
        {
            BS = P[i];
        }
    }
    for (int i = 1; i < 7; i++)
    {
        if (P[0] > P[i])
        {
            BB = P[i];
        }
    }
    printf("THE BEST BUY IS %d AND THE BEST SELL IS %d", BB, BS);

    return 0;
}