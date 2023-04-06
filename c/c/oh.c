#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value for x \n");
    scanf("%d", &x);
    printf("Enter the value for y \n");
    scanf("%d",&y);
    printf("Enter the value for z \n");
    scanf("%d",&z);
    printf("the value of the expression is %d \n", 3*x/y-z+1);

    int X= 2 , Y=3 , Z=3;
    int result = 3*X/Y-Z+1 ;
    // 3*2/3-3+1
    // 6/3-3+1
    // 2-3+1
    //0
    printf("HENCE THE RESULT IS  %d ", result);
    return 0;
}