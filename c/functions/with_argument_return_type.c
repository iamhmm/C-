#include <stdio.h>
float sum(float, float, float);
int main()
{
    float a = 4;
    float b = 5;
    float c = 6;
    float rsum;
    rsum = sum(a, b, c);
    printf(" THE SUM IS %f ", rsum);
    return 0;
}

float sum(float a, float b, float c)
{
    int sum;
    sum = a + b + c;
    return sum;
}