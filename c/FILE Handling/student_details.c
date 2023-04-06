#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


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
    FILE *fp;
    fp=fopen("op.txt","w");
    if (fp==NULL)
    exit(1);

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
    fprintf(fp,"\n\nS_NO.\t\tROLL_NO.\t\t\tNAME\t\t\tDOB\t\t\tDEPARTMENT\n\n");
    for (i = 0; i < n; i++)
    {
        fprintf(fp,"%d\t\t\t", i + 1);
        fprintf(fp,"%s\t\t\t\t", S[i].roll_number);
        fprintf(fp,"%s\t\t", S[i].name);
        fprintf(fp,"%02d/%02d/%04d\t", S[i].dob.day, S[i].dob.month, S[i].dob.year);
        fprintf(fp,"%s\n", S[i].department);
    }
    fclose(fp);

    return 0;
}
