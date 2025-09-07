#include <stdio.h>
#define discount 0.1
int main()
{
    // A shop gives a 10% discount if the bill is above 1000. Write a program that takes bill amount and prints the final amount after discount.

    int bill_amount;
    printf("Please Enter Your Bill amount:");
    scanf("%d", &bill_amount);

    // Logic
    if (bill_amount >= 1000)
    {
        int final_amount = 1000 * discount;
        printf("Your final amount is %d", bill_amount - final_amount);
    }
    else
        printf("This Discount is only for 1000RS bill amount");

    return 0;
}
