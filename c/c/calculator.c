#include<stdio.h>
#include<math.h>
int main ()
{
    int ch ; // choice 
    int a , b ;
    g:
    printf("\n1.ADDITTION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.SQUARE\n6.EXIT");
    printf("\n ENTER YOUR CHOICE ");
    scanf("%d", &ch);
    switch (ch) 
    {
        case 1 :
        printf("ENTER AN INTEGER 'a': ");
        scanf("%d", &a);
        printf("ENTER SECOND INTEGER 'b' : ");
        scanf("%d", &b);
        printf("THE SUM OF THE INTEGER %d and %d IS %d: ",a, b,  a+b);
        goto g;
        break ; 

        case 2 :
        printf("ENTER AN INTEGER 'a': ");
        scanf("%d", &a);
        printf("ENTER SECOND INTEGER 'b' : ");
        scanf("%d", &b);
        printf("THE DIFFERENCE OF THE INTEGER %d and %d IS %d: ",a, b,  a-b);
        goto g;
        break ; 

        case 3 :
        printf("ENTER AN INTEGER 'a': ");
        scanf("%d", &a);
        printf("ENTER SECOND INTEGER 'b' : ");
        scanf("%d", &b);
        printf("THE PRODUCT OF THE INTEGER %d and %d IS %d: ",a, b,  a*b);
        goto g;
        break ; 

        case 4 :
        printf("ENTER AN INTEGER 'a': ");
        scanf("%d", &a);
        printf("ENTER SECOND INTEGER 'b' : ");
        scanf("%d", &b);
        printf("THE DIVISION OF THE INTEGER %d and %d IS %d: ",a, b,  a/b);
        goto g;
        break ; 

        case 5  :
        printf("ENTER AN INTEGER 'a': ");
        scanf("%d", &a);
        printf("ENTER SECOND INTEGER 'b' : ");
        scanf("%d", &b);
        printf("THE SQUARE  OF THE INTEGER %d and %d IS %d  ", a, b , pow(a,2));
        goto g;
        break ; 

        case 6 :
        printf("");
        break ;

        default :
        printf(" ENTER A VALID CHOICCE (1-5)");
        goto g;

    }
    return 0 ;

}