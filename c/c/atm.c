#include <stdio.h>
int main()
{
    int ch;        // choice
    int cb = 1000; // curernt balance
    int wd;        // withdrawal
    int da;        //deposit amount
    int n[3] = {1, 2, 3};
    int p;         // current pin
    int i;
    A:
    printf("Enter your pin:");
    scanf("%d", &p);
    for (i = 0; i <= 2; i++)
    {
        if (p == n[i])
        {
        B:
            printf("\n1.BALANCE INQUIRY\n2.WITHDRAWAL\n3.DEPOSIT\n4.EXIT ");
        }
        /*else 
        {
            printf("ENTER A VALID PIN ");
            goto A;
        }*/
    }
    
    printf("\n***************** ENTER YOUR CHOICE ***************** ");
    scanf("%d", &ch);
    switch (ch)
    {
        
    case 1:
        printf("\nYOUR CURRENT BALANCE IS: %d ", cb);
        goto B;
        break;

    case 2:
        printf("\n ENTER THE AMOUNT YOU WANT TO WILTHDRAW  ");
        scanf("%d", &wd);
        if (wd % 500 == 0)
        {
            if (wd <= cb)
            {
                printf("\nTRANSACTION SUCCESSFUL");
            }
            else
            {
                printf("\nINSUFFIENCT BALANCE");
            }
        }
        else
        {
            printf("\nENTER THE AMOUNT IN MULTIPLES OF 500");
        }

        goto B;
        break;

    case 3:
         printf("\nENTER THE AMOUNT TOU AMOUNT TO DEPOSIT : "); 
         scanf("%d",&da);
         cb=da+cb;
         goto B;

    case 4:
        printf("");
        break;
    
    default:
        printf("\nINAVLID CHOICE");
    }
    
    return 0;
}
