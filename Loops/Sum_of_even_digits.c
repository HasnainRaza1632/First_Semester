#include <stdio.h>
int main()
{

    int number, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &number);
    while (number != 0)
    {
        int last_digit = number % 10;
        if (last_digit % 2 == 0)
        {
            sum = sum + last_digit;
            number = number / 10;
        }
        else
        {
            number = number / 10;
        }
    }
    printf("Sum of even digits:%d", sum);
    return 0;
}