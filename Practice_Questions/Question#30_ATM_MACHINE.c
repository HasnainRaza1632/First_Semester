#include <stdio.h>
int main()
{
    // ATM machine
    printf("Welcome to ATM Machine\n");
    int pin, amount, choice, current_amount = 1000, PIN = 1234;
    printf("Enter your 4 digit pin:");
    scanf("%d", &pin);
    if (pin != PIN)
    {
        printf("Invalid pin");
        return 0;
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("1)Cash Withdrawl\n2)Balance Enquiry\n3)Change Pin\n4)Exit\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("Enter amount to withdraw:");
                scanf("%d", &amount);
                if (amount > current_amount)
                {
                    printf("Insufficient Balance");
                }
                else
                {
                    current_amount -= amount;
                    printf("Please collect your cash\nRemaining Balance is:%d\n", current_amount);
                }
                break;
            case 2:
                printf("Your current balance is:%d\n", current_amount);
                break;
            case 3:
                int PIN;
                printf("Enter Your new PIN:");
                scanf("%d", &PIN);
                printf("Your new Pin is:%d\n", PIN);
                printf("Please Enter Your pin:");
                scanf("%d", &pin);
                if (pin != PIN)
                {
                    printf("Invalid pin");
                    return 0;
                }
                else
                {
                    break;
                }
                break;
            case 4:
                printf("Thank you for using ATM");
                return 0;
            }
        }
    }
    return 0;
}
