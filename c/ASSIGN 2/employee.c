#include <stdio.h>

#define DAILY_SALARY 2000

int main()
{
    int age, salary, count = 0;
    for (int i = 1; i <= 10; i++) {
        printf("Enter age of employee %d: ", i);
        scanf("%d", &age);
        if (age > 45) {
            salary = DAILY_SALARY * 30;  // Assuming 30 working days per month
            printf("Salary of employee %d is %d\n", i, salary);
            count++;
        }
    }
    printf("Total number of employees above age 45: %d\n", count);
    return 0;
}
