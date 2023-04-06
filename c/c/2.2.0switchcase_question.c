#include <stdio.h>
int main (){
    int integer;
    printf(" Enter the integer (1-5)\n");
    scanf("%d",&integer);
    switch (integer){
        case 6:
        printf(" Your reading was recorded as 1 \n");
        break;
        case 9:
        printf(" Your reading was recorded as 2 \n");
        break;
        case 7:
        printf(" Your reading was recorded as 3 \n");
        break;
        case 4:
        printf(" Your reading was recorded as 4 \n");
        break;
        case 5:
        printf(" Your reading was recorded as 5 \n");
        break;
        default :
        printf(" invalid rating \n");
    }
    return 0;
}