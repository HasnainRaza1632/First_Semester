// making program to check number is Odd/Even
#include <stdio.h>
int main()
{

    int number;

    printf("Enter value of a:");
    scanf("%d", &number);
    // Logic
    if ((number % 2) == 0)
        printf("%d is an Even Number", number);
    else
        printf("%d is an Odd Number", number);

    return 0;
}