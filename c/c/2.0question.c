#include <stdio.h>
int main (){
    int a;
    printf("Enter a value for a %d \n");
    scanf("%d",&a);
    if ( a%97 ==0){
        printf("a is divisible by 97 \n");
    }
    else {
        printf("a is not divisible by 97\n");
    }
    return 0;
}