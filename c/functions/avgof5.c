#include <stdio.h>

float calculateAverage(float marks[], int numSubjects);

int main()
{
    float marks[5][3];
    float average[5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: ", i+1);
        for (j = 0; j < 5; j++)
        {
            scanf("%f", &marks[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        average[i] = calculateAverage(marks[i], 5);
    }

    printf("\nAverage marks of each student:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: %.2f\n", i+1, average[i]);
    }

    return 0;
}

float calculateAverage(float marks[], int numSubjects)
{
    int i;
    float total = 0.0, average;
    for (i = 0; i < numSubjects; i++)
    {
        total += marks[i];
    }
 
    average = total / numSubjects;
    return average;
}
