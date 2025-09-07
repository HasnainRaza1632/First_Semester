#include <stdio.h>
int main()
{
    // Making program that Ask the user’s age, and check if they are eligible to vote (age ≥ 18)
    int age;

    printf("Enter the age:");
    scanf("%d", &age);

    // logic

    if (age >= 18)
    {
        printf("Your are eligible to vote");
    }
    else
    {
        printf("Your are not eligibile to vote");
    }

    return 0;
}
