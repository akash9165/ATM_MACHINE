#include <stdio.h>
int main()
{
    char card;
    int n;
    int p, a, b, diff, i;
    char cad;

    printf("-------Welcome To The ATM-----------\n\n");
    printf("Please Insert your card\n\n");
    scanf("%c", &card);
    if (card == 'a')
    {
        printf("----Hello Akash kawre-----\n\n");
        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");

        b = 5000;
        printf("Enter:- ");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("\nPlease enter your 4-digit pin:- \n");
            scanf("%d", &p);
            if (p == 9165)
            {
                printf("Please The amount to withdrawal\n");
                scanf("%d", &a);
                if (a > b)
                {
                    printf("Insufficient balance\n");
                }
                else
                {
                    printf("Collect the money\n");
                    diff = b - a;
                    printf("Now your total balance is %d\n", diff);
                }
            }
            else
            {
                printf("Incorrect pin\n\n");
                printf("Please try again\n\n");
                scanf("%d", &p);
                if (p == 9165)
                {
                    printf("Please The amount to withdrawal\n");
                    scanf("%d", &a);
                    if (a > b)
                    {
                        printf("Insufficient balance\n");
                    }
                    else
                    {
                        printf("Collect the money\n");
                        diff = b - a;
                        printf("Now your total balance is %d\n", diff);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("So please try again\n");
                }
            }
        }
        else if (n == 2)
        {
            printf("Please enter your 4-digit pin\n\n");
            scanf("%d", &p);
            if (p != 9165)
            {
                printf("Try again\n");
            }
            else
            {
                printf("your bank balance is %d\n", b);
            }
        }
        else
        {
            printf("Your bank balance is %d\n", b);
        }
    }
    else if (card == 'k')
    {
        printf("----Hello Prakash kawre-----\n\n");
        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");

        b = 5000;
        printf("Enter:- ");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("\nPlease enter your 4-digit pin:- \n");
            scanf("%d", &p);
            if (p == 9165)
            {
                printf("Please The amount to withdrawal\n");
                scanf("%d", &a);
                if (a > b)
                {
                    printf("Insufficient balance\n");
                }
                else
                {
                    printf("Collect the money\n");
                    diff = b - a;
                    printf("Now your total balance is %d\n", diff);
                }
            }
            else
            {
                printf("Incorrect pin\n\n");
                printf("Please try again\n\n");
                scanf("%d", &p);
                if (p == 9165)
                {
                    printf("Please The amount to withdrawal\n");
                    scanf("%d", &a);
                    if (a > b)
                    {
                        printf("Insufficient balance\n");
                    }
                    else
                    {
                        printf("Collect the money\n");
                        diff = b - a;
                        printf("Now your total balance is %d\n", diff);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("So please try again\n");
                }
            }
        }
        else if (n == 2)
        {
            printf("Please enter your 4-digit pin\n\n");
            scanf("%d", &p);
            if (p != 9165)
            {
                printf("Try again\n");
            }
            else
            {
                printf("your bank balance is %d\n", b);
            }
        }
        else
        {
            printf("Your bank balance is %d\n", b);
        }
    }
    return 0;
}