#include <stdio.h>
int main()
{
    int m;
    printf("Enter your marks (0-100) \n");
    scanf("%d", &m);
    switch (m)
    {
    case 1: for ( m > 90 && m <= 100 ) {
            printf("Your grade is A+. \n");
            }
        break;

    case 2: for (m <= 90 && m > 80 )
        {
            printf("Your grade is A. \n");
        }
        break;
    case 3 for ( m <= 80 && m > 70) {
            printf("Your grade is B+. \n");
    }
        break;
    case 4 : for(  m <= 70 && m > 60) {
            printf("Your grade is B. \n");
    }
        break;

    case 5: for (  m <= 60)     {
            printf("Your grade is C. \n");
    }
        break;

    case 6 : for (m <= 50 && m > 30) {
            printf("Your grade is D. \n");
            }
        break;
    default:
        printf("Your grade is E and you are fail! \n");
    }
    return 0;
}