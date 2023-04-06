#include<stdio.h>
int main(){
    int percentage;
    printf("Enter your percentage ");
    scanf("%d",&percentage);
    if (percentage == 100 || percentage>90 && percentage < 100){
        printf(" YOU HAVE SECURED A+ GRADE \n");
    }
    else if (percentage<=90 && percentage > 80){
        printf("YOU HAVE SECURED A \n");
    }
    else if (percentage <=80 && percentage > 70){
        printf("YOU HAVE SECURED B+ \n");
    }
    else if (percentage <=70 && percentage >60){
        printf("YOU HAVE SECURED B \n");
    }
    else {
        printf("You have FAILED \n");
    }
    return 0;
}