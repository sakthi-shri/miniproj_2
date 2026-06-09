MINI PROJECT:
bank management system :
#include <stdio.h>

int balance = 5000;

void deposit()
{
    int amt;
    printf("Enter amount: ");
    scanf("%d", &amt);
    balance += amt;
}

void withdraw()
{
    int amt;
    printf("Enter amount: ");
    scanf("%d", &amt);

    if(amt <= balance)
        balance -= amt;
    else
        printf("Insufficient balance\n");
}

void showBalance()
{
    printf("Balance = %d\n", balance);
}

int main()
{
    int choice;

    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Balance\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            deposit();
            showBalance();
            break;

        case 2:
            withdraw();
            showBalance();
            break;

        case 3:
            showBalance();
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}