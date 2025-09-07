#include <stdio.h>
int main()
{
    // Making program  to check number is Postitive or negative
    int Number;
    printf("Enter value of a:");
    scanf("%d", &Number);

    // Logic
    if (Number >= 0)
        printf("Number is Positive ");
    else
        printf("Number is Negative");
    return 0;
}