// Write a C program that simulates a simple ATM withdrawal. Read the account balance and the amount the user
// wants to withdraw. The withdrawal should only succeed if the amount is a multiple of 500, does not exceed the
// available balance, and does not exceed a daily limit of 25,000. Use logical operators to combine all the checks
// and print an appropriate message for each possible failure reason.
#include <stdio.h>

int main()
{
    int balance;
    int withdraw;

    printf("Enter the balance amount: ");
    scanf("%d", &balance);

    printf("Enter the withdraw amount: ");
    scanf("%d", &withdraw);

    if (balance <= 0)
    {
        printf("Insufficient balance. You cannot withdraw.");
    }
    else if (withdraw <= 0)
    {
        printf("Failure: Invalid withdrawal amount.");
    }
    else if (withdraw % 500 != 0)
    {
        printf("Failure: Amount must be a multiple of 500.\n");
    }
    else if (withdraw > balance)
    {
        printf("Failure: Insufficient balance.");
    }
    else if (withdraw > 25000)
    {
        printf("Failure: Daily limit exceeded.");
    }
    else
    {
        balance = balance - withdraw;

        printf("Withdrawal successful!\n");
        printf("Remaining balance: %d", balance);
    }

    return 0;
}

