#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even number \n", a);
    }
    else
    {
        printf("%d is odd \n", a);
    }

    int age;
    printf("enter the age \n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You can drive \n");
    }
    else
    {
        printf("You cannot drive \n");
    }

    int age_2;
    printf("Enter the age_2 \n");
    scanf("%d", &age_2);
    if (age == 18)
    {
        printf("you can participate");
    }
    else
    {
        printf("you cannot participate");
    }

    int A;
    int vip = 0;
    printf("\n enter the value for A \n");
    scanf("%d", &A);
    if ((A >= 50 && A <= 18) || !(vip == 0))
    // &&, || , ! are logical operator
    // '!' represents not
    {
        printf("you can get married");
    }
    else
    {
        printf("you cannot get married");
    }

    return 0;
}