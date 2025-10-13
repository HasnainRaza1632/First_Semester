#include <stdio.h>
#include <stdbool.h>
#define PIN 1234 
int main()
{
    // ATM machine
    printf("Welcome to ATM Machine\n");
    int pin, amount, choice, current_amount = 1000;
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
            default:
                printf("Invalid choice");
                return 0;
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
                int NewPin , UserEntered;
                bool isCorrectPin = true ;  
                printf("Enter Your new PIN:");
                scanf("%d", &NewPin);
                printf("Your new Pin is:%d\n", NewPin);
                printf("Please Enter Your pin:");
                scanf("%d" ,&UserEntered );
                if (NewPin == UserEntered)
                {
                    isCorrectPin = true ; 
                    break;
                }
                else
                {
                    printf("Invalid pin");
                    return 0;
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
