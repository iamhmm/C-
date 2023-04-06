#include <stdio.h>

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 5

void getMarks(int student, int marks[])
{
    printf("Enter marks for student %d:\n", student);
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

float calculateAverage(int marks[])
{
    int sum = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        sum += marks[i];
    }
    return (float)sum / NUM_SUBJECTS;
}

int main()
{
    int studentMarks[NUM_STUDENTS][NUM_SUBJECTS];
    float studentAverages[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        getMarks(i + 1, studentMarks[i]);
        studentAverages[i] = calculateAverage(studentMarks[i]);
    }

    printf("\nStudent Marks:\n");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            printf("%d ", studentMarks[i][j]);
        }
        printf("\n");
    }

    printf("\nStudent Averages:\n");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Student %d: %.2f\n", i + 1, studentAverages[i]);
    }

    return 0;
}
