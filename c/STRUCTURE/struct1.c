#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct student
{
    char roll_number[100];
    struct date dob;
    char name[100];
    char department[100];
};

int main()
{
    int i = 0;
    int n = 0; // NUMBER OF STUDENTS
    printf(" ENTER THE NUMBER OF STUDENTS  :  ");
    scanf("%d", &n);
    struct student S[n];
    printf(" \n ENTER THE DEATAILS FOR THE STUDENTS : ");
    for (i = 0; i < n; i++)
    {
        printf("\n    STUDENT %d: ", i+1);
        printf("\n      NAME              : ");
        scanf("%s", S[i].name);
        printf("\n      ROLL NO.          : ");
        scanf("%s", S[i].roll_number);
        printf("\n      DOB (dd/mm/yyyy)  : ");
        scanf("%d/%d/%d", &S[i].dob.day, &S[i].dob.month, &S[i].dob.year);
        printf("\n      DEPARTMENT        : ");
        scanf("%s", S[i].department);
    }
    printf("\n\nS_NO.\t\tROLL_NO.\t\t\tNAME\t\tDOB\t\tDEPARTMENT\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t", i + 1);
        printf("%s\t\t", S[i].roll_number);
        printf("%s\t\t", S[i].name);
        printf("%02d/%02d/%04d\t", S[i].dob.day, S[i].dob.month, S[i].dob.year);
        printf("%s\n", S[i].department);
    }

    return 0;
}
