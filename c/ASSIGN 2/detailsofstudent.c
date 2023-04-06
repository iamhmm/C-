#include <stdio.h>

#define MAX_STUDENTS 50

struct student {
    char name[50];
    int age;
    int roll_no;
    char dob[15];
};

int main()
{
    
    int n;

    printf("Enter number of students (max 50): ");
    scanf("%d", &n);
    struct student students[MAX_STUDENTS];

    // Input details of students
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Date of birth (dd/mm/yyyy): ");
        scanf("%s", students[i].dob);
    }

    // Display details of students
    printf("\nDetails of %d students:\n", n);
    printf("Name\t\tAge\tRoll No.\tDOB\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t\t%s\n", students[i].name, students[i].age, students[i].roll_no, students[i].dob);
    }

    return 0;
}
