#include <stdio.h>
void balance();
void withdrawal();
void deposit();
void pinchange();
int green_pin = 1234;
int current_balance = 1000;
int pin;
int choice;
char y_n;
int withdrawal_amount;
int deposit_amount;
int new_pin;
int confirm_pin;

void main()
{

    do
    {
        printf("1.Balance Inquiry\n2.Withdrawal\n3.Deposit\n4.PIN Change\n5.EXIT\n");
        printf("ENTER YOUR CHOICE :  \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            balance();
            break;

        case 2:
            withdrawal();
            break;

        case 3:
            deposit();
            break;

        case 4:
            pinchange();
            break;

        case 5:
            printf("###### THANK YOU ###### \n");
            break;

        default:
            printf("###### INVALID INPUT . (ENTER WITHIN RANGE OF [1-5]) ###### \n");
        }

        printf("\n WOULD YOU LIKE TO COMTINUE (Y/N) ? :  \n");
        scanf("%s", &y_n);

    } while (y_n == 'Y' || y_n == 'y');
    // if (y_n ==' n' || y_n ==' N')
    // {
    //      printf("###### THANK YOU ###### \n");
    // }
}

void balance()
{

    printf("ENTER YOUR PIN :  \n ");
    scanf("%d", &pin);
    if (green_pin == pin)
    {
        printf(" YOUR CURRENT BALANCE IS %d Rupees . \n", current_balance);
    }

    else
    {
        printf(" INVALID PIN\n ");
    }
}
void withdrawal()
{

    printf("ENTER YOUR PIN :  \n ");
    scanf("%d", &pin);
    if (green_pin == pin)
    {
        printf(" ENTER THE AMOUNT YOU WANT TO WITHDRAW :   \n");
        scanf("%d", &withdrawal_amount);
        if (withdrawal_amount <= current_balance && withdrawal_amount % 500 == 0)
        {
            printf("TRANSACTION SUCCESFUL,\n COLLECT YOUR AMOUNT(%d)", withdrawal_amount);
            current_balance -= withdrawal_amount;
        }
        else if (withdrawal_amount % 500 != 0)
        {
            printf("ENTER THE AMOUNT IN THE MULTIPLES OF 500\n");
        }

        else
        {
            printf("INSUFFICIENT BALANCE \n");
        }
    }
    else
    {
        printf(" \nINVALID PIN\n ");
    }
}

void deposit()
{

    printf("ENTER YOUR PIN :  \n ");
    scanf("%d", &pin);
    if (green_pin == pin)
    {
        printf(" ENTER THE AMOUNT YOU WANT TO DEPOSIT :   \n");
        scanf("%d", &deposit_amount);
        current_balance += deposit_amount;
    }

    else
    {
        printf(" \nINVALID PIN\n ");
    }
}

void pinchange()
{

    printf("ENTER YOUR PIN :  \n ");
    scanf("%d", &pin);
    if (green_pin == pin)
    {
        printf(" ENTER YOUR NEW PIN :   \n");
        scanf("%d", &new_pin);
        printf(" ENTER YOUR CONFIRM PIN :   \n");
        scanf("%d", &confirm_pin);
        if (new_pin == confirm_pin)
        {
            printf(" PIN CHANGED \n");
            green_pin = confirm_pin;
        }

        else
        {
            printf("THE PIN DIDN'T MATCH \n");
        }
    }

    else
    {
        printf(" \nINVALID PIN\n ");
    }
}