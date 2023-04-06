#include<stdio.h>
int main (){
    int Age;
    printf("Enter the age \n");
    scanf("%d",&Age);
    if ( Age>=50 || Age<=17) {
        printf("You cannot get married \n");
    }
    else {
        printf("You can get married \n");
    }
    return 0;
}