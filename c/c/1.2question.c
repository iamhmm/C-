#include <stdio.h>
int main()
{
    int r;
    float p;
    printf("enter the vlaue for radius of circle %d \n");
    scanf("%d", &r);
    printf("enter the value for p i.e pie %f \n");
    scanf("%f", &p);
    printf("The area of circle is %f \n", p * r * r);

    int h;
    printf("enter the value for height of cylinder %d \n");
    scanf("%d", &h);
    printf("The volume of cylinder is %f \n", p * r * r * h);
    return 0;
}