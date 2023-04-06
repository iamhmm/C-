#include<stdio.h>
int main (){
    int age;
    printf("Enter the age of a student %d \n");
    scanf("%d",&age);
    if (age>=4 && age<=6) {
        printf("the child can get admitted to the nursery \n");
    }
    else if (age>=12 && age<=16){
        printf("the child can be admitted to the grade 10 \n");
    }
    else {
        printf("your child cannot be admitted to the school or age category didn't match for the vacancy \n");
    }
int grade;
printf("which grade are you in ? \n");
scanf("%d",&grade);
if (grade==8) {
    printf("you can appear for BOARD LEVEL EXAMINATION \n");
}
else if (grade==10) {
    printf("you can appear for the SECONDARY LEVEL EXAMINATION \n");
}
else if (grade==9 || grade<8 && grade>=1) {
    printf("prepare for terminal examination \n ");
}
else {
    printf("invalid grade category \n");
}
return 0;
}