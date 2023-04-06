#include <stdio.h>
struct student
{
    char roll_number [20];
    char dob[12];
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
    printf(" \n ENTER THE DEATAILS FOR THE STUDENS : ");
    for (i = 0; i < n; i++)
    
    {
        printf("\n    STUDENT %d: ",i+1);
        printf("\n      NAME              : ");
        scanf("%s", S[i].name);
        printf("\n      ROLL NO.          : ");
        scanf("%s", S[i].roll_number);
        printf("\n      DOB (dd/mm/yyyy)  : ");
        scanf("%s", &S[i].dob);
        printf("\n      DEPARTMENT        : ");
        scanf("%s", &S[i].department);
    }
    printf("\n\nS_NO.\t\tROLL_NO.\t\tNAME\t\t\tDOB\t\t\tDEPARTMENT\n\n");
    for (i = 0; i < n; i++)
        
    {
        printf("%d\t\t", i + 1);
        printf("%s\t\t\t",S[i].roll_number);
        printf("%s\t\t", S[i].name);
        printf("%s\t\t", S[i].dob);
        printf("%s", S[i].department);
        printf("\n");
    }

    return 0;
}